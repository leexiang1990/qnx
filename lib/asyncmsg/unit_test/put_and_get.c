/*
 * $QNXLicenseC:
 * Copyright 2007, QNX Software Systems. All Rights Reserved.
 * 
 * You must obtain a written license from and pay applicable license fees to QNX 
 * Software Systems before you may reproduce, modify or distribute this software, 
 * or any work that includes all or part of this software.   Free development 
 * licenses are available for evaluation and non-commercial purposes.  For more 
 * information visit http://licensing.qnx.com or email licensing@qnx.com.
 *  
 * This file may contain contributions from others.  Please review this entire 
 * file for other proprietary rights or license notices, as well as the QNX 
 * Development Suite License Guide at http://licensing.qnx.com/license-guide/ 
 * for other information.
 * $
 */




#include <stdio.h>
#include <process.h>
#include <unistd.h>
#include <sys/asyncmsg.h>

char *msg = "AsyncMsg Passing";

int callback(int err, void *cmsg, unsigned handle)
{
	printf("Callback: err = %d, msg = %p (%p), handle = %d\n",
		   err, cmsg, msg, handle);
	return 0;
}

/*
 * Simple test. Create a channel, connect to it, put a message,
 * get them, done
 */
int main()
{
	int chid, coid;
	struct _asyncmsg_connection_attr aca;
	struct _asyncmsg_get_header *agh, *agh1;
	
	if ((chid = asyncmsg_channel_create(0, 0666, 2048, 5, NULL, NULL)) == -1) {
		perror("channel_create");
		return -1;
	}
	
	memset(&aca, 0, sizeof(aca));
	aca.buffer_size = 2048;
	aca.max_num_buffer = 5;
	aca.trigger_num_msg = 1;
	
	if ((coid = asyncmsg_connect_attach(0, 0, chid, 0, 0, &aca)) == -1) {
		perror("connect_attach");
		return -1;
	}
	
	
	if ((asyncmsg_put(coid, msg, strlen(msg) + 1, 1234, callback)) == -1) {
		perror("put");
		return -1;
	}
	
	if ((agh = asyncmsg_get(chid)) == NULL)	{
		perror("get");
		return -1;
	}
	
	printf("Got message(s): \n\n");
	while (agh1 = agh) {
		agh = agh1->next;
		printf("from process: %d (%d)\n", agh1->info.pid, getpid());
		printf("msglen: %d (%d)\n", agh1->info.msglen, strlen(msg) + 1);
		printf("srclen: %d\n", agh1->info.srcmsglen);
		printf("err: %d\n", agh1->err);
		printf("parts: %d\n", agh1->parts);
		printf("msg: %s\n\n", (char *)agh1->iov->iov_base);
		asyncmsg_free(agh1);
	}

	sleep(1);
	
	if (asyncmsg_connect_detach(coid) == -1) {
		perror("connect_detach");
		return -1;
	}
	
	if (asyncmsg_channel_destroy(chid) == -1) {
		perror("channel_detach");
		return -1;
	}
	
	return 0;
}

__SRCVERSION("put_and_get.c $Rev: 153052 $");
