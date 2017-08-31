#
# $QNXtpLicenseA:
# Copyright 2007, QNX Software Systems. All Rights Reserved.
# 
# You must obtain a written license from and pay applicable license fees to QNX 
# Software Systems before you may reproduce, modify or distribute this software, 
# or any work that includes all or part of this software.   Free development 
# licenses are available for evaluation and non-commercial purposes.  For more 
# information visit http://licensing.qnx.com or email licensing@qnx.com.
#  
# This file may contain contributions from others.  Please review this entire 
# file for other proprietary rights or license notices, as well as the QNX 
# Development Suite License Guide at http://licensing.qnx.com/license-guide/ 
# for other information.
# $
#



/*****************************************************************************
* Tabs 5 9
* The carets in the following lines will match up if tabs are set properly
*	^	^	^	^	^	^	<== tabs
*   ^   ^   ^   ^   ^   ^   <== spaces
******************************************************************************
*
*	HSA Software License, Version 1.0
*
*	Copyright (C) 2000,2001,2002 Hitachi Semiconductor (America), Inc.
*	All rights reserved.
*
*	Redistribution and use in source and binary forms, with or without
*	modification, are permitted provided that the following conditions are
*	met:
*
*	1.	Redistributions of source code must retain the above copyright notice,
*		this list of conditions and the following disclaimer.
*
*	2.	Redistributions in binary form must reproduce the above copyright
*		notice, this list of conditions and the following disclaimer in the
*		documentation and/or other materials provided with the distribution.
*
*	3.	The end-user documentation included with the redistribution, if any,
*		must include the following acknowledgment: "This product includes
*		software developed by Hitachi Semiconductor (America), Inc."
*		Alternately, this acknowledgment may appear in the software itself,
*		if and wherever such third-party acknowledgments normally appear.
*
*
*	THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED WARRANTIES,
*	INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
*	AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
*	HITACHI SEMICONDUCTOR (AMERICA), INC. BE LIABLE FOR ANY DIRECT, INDIRECT,
*	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
*	NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*	DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*	THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
*	THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*
******************************************************************************
*
*	strcpy.s
*
*	r4 - dest
*	r5 - src
*
*****************************************************************************/

	.little
	.global	strcpy
	.type		strcpy,@function
	.balignw	32,0x0009
strcpy:
	mov.l	r14,@-r15
	mov		r15,r14
	mov		r4,		r2		! save dst
	mov		#0,		r1		! make sure r1 is zero

	mov		r5,		r0		! check for word alignment
	or		r4,		r0
	tst		#3,		r0
	bf		.L_strcpy_byteloop

	.balignw	8,0x0009
	mov.l	@r5+,	r0
	cmp/str	r0,		r1		! check if src string less than 4 bytes
	bt		.L_strcpy_byteinit
.L_strcpy_wordloop:
	mov.l	r0,		@r4
	mov.l	@r5+,	r0
	cmp/str	r0,		r1
	bf.s	.L_strcpy_wordloop
	add		#4,		r4

.L_strcpy_byteinit:
	add		#-4,	r5

	.balignw	8,0x0009
.L_strcpy_byteloop:
	mov.b	@r5+,	r0
	mov.b	r0,		@r4
	cmp/eq	r0,		r1
	bt.s	.L_strcpy_exit
	add		#1,		r4

	mov.b	@r5+,	r0
	mov.b	r0,		@r4
	cmp/eq	r0,		r1
	bf.s	.L_strcpy_byteloop
	add		#1,		r4

.L_strcpy_exit:
	mov.l   @r15+,r14
	rts
	mov		r2,		r0


.L_function_end:
	.size	strcpy,.L_function_end-strcpy
