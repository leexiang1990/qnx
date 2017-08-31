/*
 * DO NOT EDIT THIS FILE BY HAND!
 * It is generated by MKlib_gen.sh.
 *
 * This is a file of trivial functions generated from macro
 * definitions in curses.h to satisfy the XSI Curses requirement
 * that every macro also exist as a callable function.
 *
 * It will never be linked unless you call one of the entry
 * points with its normal macro definition disabled. In that
 * case, if you have no shared libraries, it will indirectly
 * pull most of the rest of the library into your link image.
 */
#include <curses.priv.h>


#undef addch
int addch ( const chtype z)
{
	T((T_CALLED("addch(%s)"), _tracechtype2(0,z))); returnCode( waddch(stdscr,z));
}


#undef addchnstr
int addchnstr ( const chtype * a1, int z)
{
	T((T_CALLED("addchnstr(%p,%d)"), a1, z)); returnCode( waddchnstr(stdscr,a1,z));
}


#undef addchstr
int addchstr ( const chtype * z)
{
	T((T_CALLED("addchstr(%p)"), z)); returnCode( waddchnstr(stdscr,z,-1));
}


#undef addnstr
int addnstr ( const char * a1, int z)
{
	T((T_CALLED("addnstr(%s,%d)"), _nc_visbuf2(0,a1), z)); returnCode( waddnstr(stdscr,a1,z));
}


#undef addstr
int addstr ( const char * z)
{
	T((T_CALLED("addstr(%s)"), _nc_visbuf2(0,z))); returnCode( waddnstr(stdscr,z,-1));
}


#undef attroff
int attroff ( int z)
{
	T((T_CALLED("attroff(%s)"), _traceattr2(0,z))); returnCode( wattr_off(stdscr, z, (void *)0));
}


#undef attron
int attron ( int z)
{
	T((T_CALLED("attron(%s)"), _traceattr2(0,z))); returnCode( wattr_on(stdscr, z, (void *)0));
}


#undef attrset
int attrset ( int z)
{
	T((T_CALLED("attrset(%s)"), _traceattr2(0,z))); returnCode( ((stdscr)?((stdscr)->_attrs = (z)):0));
}


#undef attr_get
int attr_get ( attr_t * a1, short * a2, void * z)
{
	T((T_CALLED("attr_get(%p,%p,%p)"), a1, a2, z)); returnCode( ((stdscr)->_attrs));
}


#undef attr_off
int attr_off ( attr_t a1, void * z)
{
	T((T_CALLED("attr_off(%s,%p)"), _traceattr2(0,a1), z)); returnCode( wattr_off(stdscr,a1,z));
}


#undef attr_on
int attr_on ( attr_t a1, void * z)
{
	T((T_CALLED("attr_on(%s,%p)"), _traceattr2(0,a1), z)); returnCode( wattr_on(stdscr,a1,z));
}


#undef attr_set
int attr_set ( attr_t a1, short a2, void * z)
{
	T((T_CALLED("attr_set(%s,%d,%p)"), _traceattr2(0,a1), a2, z)); returnCode( ((stdscr)?((stdscr)->_attrs = (a1)):0));
}


#undef bkgd
int bkgd ( chtype z)
{
	T((T_CALLED("bkgd(%s)"), _tracechtype2(0,z))); returnCode( wbkgd(stdscr,z));
}


#undef bkgdset
void bkgdset ( chtype z)
{
	T((T_CALLED("bkgdset(%s)"), _tracechtype2(0,z))); wbkgdset(stdscr,z) ;
	returnVoid;
}


#undef border
int border ( chtype a1, chtype a2, chtype a3, chtype a4, chtype a5, chtype a6, chtype a7, chtype z)
{
	T((T_CALLED("border(%s,%s,%s,%s,%s,%s,%s,%s)"), _tracechtype2(0,a1), _tracechtype2(1,a2), _tracechtype2(2,a3), _tracechtype2(3,a4), _tracechtype2(4,a5), _tracechtype2(5,a6), _tracechtype2(6,a7), _tracechtype2(7,z))); returnCode( wborder(stdscr, a1, a2, a3, a4, a5, a6, a7, z));
}


#undef box
int box ( WINDOW * a1, chtype a2, chtype z)
{
	T((T_CALLED("box(%p,%s,%s)"), a1, _tracechtype2(1,a2), _tracechtype2(2,z))); returnCode( wborder(a1, a2, a2, z, z, 0, 0, 0, 0));
}


#undef chgat
int chgat ( int a1, attr_t a2, short a3, const void * z)
{
	T((T_CALLED("chgat(%d,%s,%d,%p)"), a1, _traceattr2(1,a2), a3, z)); returnCode( wchgat(stdscr,a1,a2,a3,z));
}


#undef clear
int clear ( void)
{
	T((T_CALLED("clear()"))); returnCode( wclear(stdscr));
}


#undef clrtobot
int clrtobot ( void)
{
	T((T_CALLED("clrtobot()"))); returnCode( wclrtobot(stdscr));
}


#undef clrtoeol
int clrtoeol ( void)
{
	T((T_CALLED("clrtoeol()"))); returnCode( wclrtoeol(stdscr));
}


#undef color_set
int color_set ( short a1, void * z)
{
	T((T_CALLED("color_set(%d,%p)"), a1, z)); returnCode( wcolor_set(stdscr,a1,z));
}


#undef COLOR_PAIR
int COLOR_PAIR ( int z)
{
	T((T_CALLED("COLOR_PAIR(%d)"), z)); returnCode( ((z) << ((0) + 8)));
}


#undef delch
int delch ( void)
{
	T((T_CALLED("delch()"))); returnCode( wdelch(stdscr));
}


#undef deleteln
int deleteln ( void)
{
	T((T_CALLED("deleteln()"))); returnCode( winsdelln(stdscr,-1));
}


#undef echochar
int echochar ( const chtype z)
{
	T((T_CALLED("echochar(%s)"), _tracechtype2(0,z))); returnCode( wechochar(stdscr,z));
}


#undef getbkgd
chtype getbkgd ( WINDOW * z)
{
	T((T_CALLED("getbkgd(%p)"), z)); returnCode( ((z)->_bkgd));
}


#undef getch
int getch ( void)
{
	T((T_CALLED("getch()"))); returnCode( wgetch(stdscr));
}


#undef getnstr
int getnstr ( char * a1, int z)
{
	T((T_CALLED("getnstr(%s,%d)"), _nc_visbuf2(0,a1), z)); returnCode( wgetnstr(stdscr, a1, z));
}


#undef getstr
int getstr ( char * z)
{
	T((T_CALLED("getstr(%s)"), _nc_visbuf2(0,z))); returnCode( wgetnstr(stdscr, z, -1));
}


#undef hline
int hline ( chtype a1, int z)
{
	T((T_CALLED("hline(%s,%d)"), _tracechtype2(0,a1), z)); returnCode( whline(stdscr, a1, z));
}


#undef inch
chtype inch ( void)
{
	T((T_CALLED("inch()"))); returnCode( ((stdscr)?(stdscr)->_line[(stdscr)->_cury].text[(stdscr)->_curx]:0));
}


#undef inchnstr
int inchnstr ( chtype * a1, int z)
{
	T((T_CALLED("inchnstr(%p,%d)"), a1, z)); returnCode( winchnstr(stdscr,a1,z));
}


#undef inchstr
int inchstr ( chtype * z)
{
	T((T_CALLED("inchstr(%p)"), z)); returnCode( winchnstr(stdscr, z, -1));
}


#undef innstr
int innstr ( char * a1, int z)
{
	return winnstr(stdscr,a1,z) ;
}


#undef insch
int insch ( chtype z)
{
	T((T_CALLED("insch(%s)"), _tracechtype2(0,z))); returnCode( winsch(stdscr,z));
}


#undef insdelln
int insdelln ( int z)
{
	T((T_CALLED("insdelln(%d)"), z)); returnCode( winsdelln(stdscr,z));
}


#undef insertln
int insertln ( void)
{
	T((T_CALLED("insertln()"))); returnCode( winsdelln(stdscr,1));
}


#undef insnstr
int insnstr ( const char * a1, int z)
{
	T((T_CALLED("insnstr(%s,%d)"), _nc_visbuf2(0,a1), z)); returnCode( winsnstr(stdscr,a1,z));
}


#undef insstr
int insstr ( const char * z)
{
	T((T_CALLED("insstr(%s)"), _nc_visbuf2(0,z))); returnCode( winsnstr(stdscr, z, -1));
}


#undef instr
int instr ( char * z)
{
	T((T_CALLED("instr(%s)"), _nc_visbuf2(0,z))); returnCode( winnstr(stdscr, z, -1));
}


#undef move
int move ( int a1, int z)
{
	T((T_CALLED("move(%d,%d)"), a1, z)); returnCode( wmove(stdscr,a1,z));
}


#undef mvaddch
int mvaddch ( int a1, int a2, const chtype z)
{
	T((T_CALLED("mvaddch(%d,%d,%s)"), a1, a2, _tracechtype2(2,z))); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : waddch(stdscr,z)));
}


#undef mvaddchnstr
int mvaddchnstr ( int a1, int a2, const chtype * a3, int z)
{
	T((T_CALLED("mvaddchnstr(%d,%d,%p,%d)"), a1, a2, a3, z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : waddchnstr(stdscr,a3,z)));
}


#undef mvaddchstr
int mvaddchstr ( int a1, int a2, const chtype * z)
{
	T((T_CALLED("mvaddchstr(%d,%d,%p)"), a1, a2, z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : waddchnstr(stdscr,z,-1)));
}


#undef mvaddnstr
int mvaddnstr ( int a1, int a2, const char * a3, int z)
{
	T((T_CALLED("mvaddnstr(%d,%d,%s,%d)"), a1, a2, _nc_visbuf2(2,a3), z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : waddnstr(stdscr,a3,z)));
}


#undef mvaddstr
int mvaddstr ( int a1, int a2, const char * z)
{
	T((T_CALLED("mvaddstr(%d,%d,%s)"), a1, a2, _nc_visbuf2(2,z))); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : waddnstr(stdscr,z,-1)));
}


#undef mvchgat
int mvchgat ( int a1, int a2, int a3, attr_t a4, short a5, const void * z)
{
	T((T_CALLED("mvchgat(%d,%d,%d,%s,%d,%p)"), a1, a2, a3, _traceattr2(3,a4), a5, z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : wchgat(stdscr,a3,a4,a5,z)));
}


#undef mvdelch
int mvdelch ( int a1, int z)
{
	T((T_CALLED("mvdelch(%d,%d)"), a1, z)); returnCode( (wmove(stdscr,a1,z) == (-1) ? (-1) : wdelch(stdscr)));
}


#undef mvgetch
int mvgetch ( int a1, int z)
{
	T((T_CALLED("mvgetch(%d,%d)"), a1, z)); returnCode( (wmove(stdscr,a1,z) == (-1) ? (-1) : wgetch(stdscr)));
}


#undef mvgetnstr
int mvgetnstr ( int a1, int a2, char * a3, int z)
{
	T((T_CALLED("mvgetnstr(%d,%d,%s,%d)"), a1, a2, _nc_visbuf2(2,a3), z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : wgetnstr(stdscr,a3,z)));
}


#undef mvgetstr
int mvgetstr ( int a1, int a2, char * z)
{
	T((T_CALLED("mvgetstr(%d,%d,%s)"), a1, a2, _nc_visbuf2(2,z))); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : wgetnstr(stdscr, z, -1)));
}


#undef mvhline
int mvhline ( int a1, int a2, chtype a3, int z)
{
	T((T_CALLED("mvhline(%d,%d,%s,%d)"), a1, a2, _tracechtype2(2,a3), z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : whline(stdscr,a3,z)));
}


#undef mvinch
chtype mvinch ( int a1, int z)
{
	T((T_CALLED("mvinch(%d,%d)"), a1, z)); returnCode( (wmove(stdscr,a1,z) == (-1) ? (chtype)(-1) : ((stdscr)?(stdscr)->_line[(stdscr)->_cury].text[(stdscr)->_curx]:0)));
}


#undef mvinchnstr
int mvinchnstr ( int a1, int a2, chtype * a3, int z)
{
	T((T_CALLED("mvinchnstr(%d,%d,%p,%d)"), a1, a2, a3, z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : winchnstr(stdscr,a3,z)));
}


#undef mvinchstr
int mvinchstr ( int a1, int a2, chtype * z)
{
	T((T_CALLED("mvinchstr(%d,%d,%p)"), a1, a2, z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : winchnstr(stdscr, z, -1)));
}


#undef mvinnstr
int mvinnstr ( int a1, int a2, char * a3, int z)
{
	T((T_CALLED("mvinnstr(%d,%d,%s,%d)"), a1, a2, _nc_visbuf2(2,a3), z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : winnstr(stdscr,a3,z)));
}


#undef mvinsch
int mvinsch ( int a1, int a2, chtype z)
{
	T((T_CALLED("mvinsch(%d,%d,%s)"), a1, a2, _tracechtype2(2,z))); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : winsch(stdscr,z)));
}


#undef mvinsnstr
int mvinsnstr ( int a1, int a2, const char * a3, int z)
{
	T((T_CALLED("mvinsnstr(%d,%d,%s,%d)"), a1, a2, _nc_visbuf2(2,a3), z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : winsnstr(stdscr,a3,z)));
}


#undef mvinsstr
int mvinsstr ( int a1, int a2, const char * z)
{
	T((T_CALLED("mvinsstr(%d,%d,%s)"), a1, a2, _nc_visbuf2(2,z))); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : winsnstr(stdscr, z, -1)));
}


#undef mvinstr
int mvinstr ( int a1, int a2, char * z)
{
	T((T_CALLED("mvinstr(%d,%d,%s)"), a1, a2, _nc_visbuf2(2,z))); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : winnstr(stdscr, z, -1)));
}


#undef mvvline
int mvvline ( int a1, int a2, chtype a3, int z)
{
	T((T_CALLED("mvvline(%d,%d,%s,%d)"), a1, a2, _tracechtype2(2,a3), z)); returnCode( (wmove(stdscr,a1,a2) == (-1) ? (-1) : wvline(stdscr,a3,z)));
}


#undef mvwaddch
int mvwaddch ( WINDOW * a1, int a2, int a3, const chtype z)
{
	T((T_CALLED("mvwaddch(%p,%d,%d,%s)"), a1, a2, a3, _tracechtype2(3,z))); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : waddch(a1,z)));
}


#undef mvwaddchnstr
int mvwaddchnstr ( WINDOW * a1, int a2, int a3, const chtype * a4, int z)
{
	T((T_CALLED("mvwaddchnstr(%p,%d,%d,%p,%d)"), a1, a2, a3, a4, z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : waddchnstr(a1,a4,z)));
}


#undef mvwaddchstr
int mvwaddchstr ( WINDOW * a1, int a2, int a3, const chtype * z)
{
	T((T_CALLED("mvwaddchstr(%p,%d,%d,%p)"), a1, a2, a3, z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : waddchnstr(a1,z,-1)));
}


#undef mvwaddnstr
int mvwaddnstr ( WINDOW * a1, int a2, int a3, const char * a4, int z)
{
	T((T_CALLED("mvwaddnstr(%p,%d,%d,%s,%d)"), a1, a2, a3, _nc_visbuf2(3,a4), z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : waddnstr(a1,a4,z)));
}


#undef mvwaddstr
int mvwaddstr ( WINDOW * a1, int a2, int a3, const char * z)
{
	T((T_CALLED("mvwaddstr(%p,%d,%d,%s)"), a1, a2, a3, _nc_visbuf2(3,z))); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : waddnstr(a1,z,-1)));
}


#undef mvwchgat
int mvwchgat ( WINDOW * a1, int a2, int a3, int a4, attr_t a5, short a6, const void * z)
{
	T((T_CALLED("mvwchgat(%p,%d,%d,%d,%s,%d,%p)"), a1, a2, a3, a4, _traceattr2(4,a5), a6, z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : wchgat(a1,a4,a5,a6,z)));
}


#undef mvwdelch
int mvwdelch ( WINDOW * a1, int a2, int z)
{
	T((T_CALLED("mvwdelch(%p,%d,%d)"), a1, a2, z)); returnCode( (wmove(a1,a2,z) == (-1) ? (-1) : wdelch(a1)));
}


#undef mvwgetch
int mvwgetch ( WINDOW * a1, int a2, int z)
{
	T((T_CALLED("mvwgetch(%p,%d,%d)"), a1, a2, z)); returnCode( (wmove(a1,a2,z) == (-1) ? (-1) : wgetch(a1)));
}


#undef mvwgetnstr
int mvwgetnstr ( WINDOW * a1, int a2, int a3, char * a4, int z)
{
	T((T_CALLED("mvwgetnstr(%p,%d,%d,%s,%d)"), a1, a2, a3, _nc_visbuf2(3,a4), z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : wgetnstr(a1,a4,z)));
}


#undef mvwgetstr
int mvwgetstr ( WINDOW * a1, int a2, int a3, char * z)
{
	T((T_CALLED("mvwgetstr(%p,%d,%d,%s)"), a1, a2, a3, _nc_visbuf2(3,z))); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : wgetnstr(a1, z, -1)));
}


#undef mvwhline
int mvwhline ( WINDOW * a1, int a2, int a3, chtype a4, int z)
{
	T((T_CALLED("mvwhline(%p,%d,%d,%s,%d)"), a1, a2, a3, _tracechtype2(3,a4), z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : whline(a1,a4,z)));
}


#undef mvwinch
chtype mvwinch ( WINDOW * a1, int a2, int z)
{
	T((T_CALLED("mvwinch(%p,%d,%d)"), a1, a2, z)); returnCode( (wmove(a1,a2,z) == (-1) ? (chtype)(-1) : ((a1)?(a1)->_line[(a1)->_cury].text[(a1)->_curx]:0)));
}


#undef mvwinchnstr
int mvwinchnstr ( WINDOW * a1, int a2, int a3, chtype * a4, int z)
{
	T((T_CALLED("mvwinchnstr(%p,%d,%d,%p,%d)"), a1, a2, a3, a4, z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : winchnstr(a1,a4,z)));
}


#undef mvwinchstr
int mvwinchstr ( WINDOW * a1, int a2, int a3, chtype * z)
{
	T((T_CALLED("mvwinchstr(%p,%d,%d,%p)"), a1, a2, a3, z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : winchnstr(a1, z, -1)));
}


#undef mvwinnstr
int mvwinnstr ( WINDOW * a1, int a2, int a3, char * a4, int z)
{
	T((T_CALLED("mvwinnstr(%p,%d,%d,%s,%d)"), a1, a2, a3, _nc_visbuf2(3,a4), z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : winnstr(a1,a4,z)));
}


#undef mvwinsch
int mvwinsch ( WINDOW * a1, int a2, int a3, chtype z)
{
	T((T_CALLED("mvwinsch(%p,%d,%d,%s)"), a1, a2, a3, _tracechtype2(3,z))); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : winsch(a1,z)));
}


#undef mvwinsnstr
int mvwinsnstr ( WINDOW * a1, int a2, int a3, const char * a4, int z)
{
	T((T_CALLED("mvwinsnstr(%p,%d,%d,%s,%d)"), a1, a2, a3, _nc_visbuf2(3,a4), z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : winsnstr(a1,a4,z)));
}


#undef mvwinsstr
int mvwinsstr ( WINDOW * a1, int a2, int a3, const char * z)
{
	T((T_CALLED("mvwinsstr(%p,%d,%d,%s)"), a1, a2, a3, _nc_visbuf2(3,z))); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : winsnstr(a1, z, -1)));
}


#undef mvwinstr
int mvwinstr ( WINDOW * a1, int a2, int a3, char * z)
{
	T((T_CALLED("mvwinstr(%p,%d,%d,%s)"), a1, a2, a3, _nc_visbuf2(3,z))); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : winnstr(a1, z, -1)));
}


#undef mvwvline
int mvwvline ( WINDOW * a1, int a2, int a3, chtype a4, int z)
{
	T((T_CALLED("mvwvline(%p,%d,%d,%s,%d)"), a1, a2, a3, _tracechtype2(3,a4), z)); returnCode( (wmove(a1,a2,a3) == (-1) ? (-1) : wvline(a1,a4,z)));
}


#undef PAIR_NUMBER
int PAIR_NUMBER ( int z)
{
	T((T_CALLED("PAIR_NUMBER(%d)"), z)); returnCode( (((z) & ((((1UL) << 8) - 1UL) << ((0) + 8))) >> 8));
}


#undef redrawwin
int redrawwin ( WINDOW * z)
{
	T((T_CALLED("redrawwin(%p)"), z)); returnCode( wredrawln(z, 0, z->_maxy+1));
}


#undef refresh
int refresh ( void)
{
	T((T_CALLED("refresh()"))); returnCode( wrefresh(stdscr));
}


#undef scrl
int scrl ( int z)
{
	T((T_CALLED("scrl(%d)"), z)); returnCode( wscrl(stdscr,z));
}


#undef scroll
int scroll ( WINDOW * z)
{
	T((T_CALLED("scroll(%p)"), z)); returnCode( wscrl(z,1));
}


#undef setscrreg
int setscrreg ( int a1, int z)
{
	T((T_CALLED("setscrreg(%d,%d)"), a1, z)); returnCode( wsetscrreg(stdscr,a1,z));
}


#if USE_WIDEC_SUPPORT
#undef slk_attr_off
int slk_attr_off ( const attr_t a1, void * z)
{
	T((T_CALLED("slk_attr_off(%s,%p)"), _traceattr2(0,a1), z)); returnCode( ((z) ? (-1) : slk_attroff(a1)));
}
#endif


#if USE_WIDEC_SUPPORT
#undef slk_attr_on
int slk_attr_on ( attr_t a1, void * z)
{
	T((T_CALLED("slk_attr_on(%s,%p)"), _traceattr2(0,a1), z)); returnCode( ((z) ? (-1) : slk_attron(a1)));
}
#endif


#undef standout
int standout ( void)
{
	T((T_CALLED("standout()"))); returnCode( (((stdscr)?((stdscr)->_attrs = (((1UL) << ((8) + 8)))):0)));
}


#undef standend
int standend ( void)
{
	T((T_CALLED("standend()"))); returnCode( (((stdscr)?((stdscr)->_attrs = (0L)):0)));
}


#undef timeout
void timeout ( int z)
{
	T((T_CALLED("timeout(%d)"), z)); wtimeout(stdscr,z) ;
	returnVoid;
}


#undef untouchwin
int untouchwin ( WINDOW * z)
{
	T((T_CALLED("untouchwin(%p)"), z)); returnCode( wtouchln((z), 0, ((z)?((z)->_maxy + 1):(-1)), 0));
}


#if USE_WIDEC_SUPPORT
#undef vid_attr
int vid_attr ( attr_t a1, short a2, void * z)
{
	T((T_CALLED("vid_attr(%s,%d,%p)"), _traceattr2(0,a1), a2, z)); returnCode( vidattr(a1));
}
#endif


#undef vline
int vline ( chtype a1, int z)
{
	T((T_CALLED("vline(%s,%d)"), _tracechtype2(0,a1), z)); returnCode( wvline(stdscr, a1, z));
}


#undef vw_printw
int vw_printw ( WINDOW * a1, NCURSES_CONST char * a2, va_list z)
{
	T((T_CALLED("vw_printw(%p,%s,%p)"), a1, _nc_visbuf2(1,a2), z)); returnCode( vwprintw (a1, a2, z));
}


#undef vw_scanw
int vw_scanw ( WINDOW * a1, NCURSES_CONST char * a2, va_list z)
{
	T((T_CALLED("vw_scanw(%p,%s,%p)"), a1, _nc_visbuf2(1,a2), z)); returnCode( vwscanw (a1, a2, z));
}


#undef waddchstr
int waddchstr ( WINDOW * a1, const chtype * z)
{
	T((T_CALLED("waddchstr(%p,%p)"), a1, z)); returnCode( waddchnstr(a1,z,-1));
}


#undef waddstr
int waddstr ( WINDOW * a1, const char * z)
{
	T((T_CALLED("waddstr(%p,%s)"), a1, _nc_visbuf2(1,z))); returnCode( waddnstr(a1,z,-1));
}


#undef wattron
int wattron ( WINDOW * a1, int z)
{
	T((T_CALLED("wattron(%p,%d)"), a1, z)); returnCode( wattr_on(a1, z, (void *)0));
}


#undef wattroff
int wattroff ( WINDOW * a1, int z)
{
	T((T_CALLED("wattroff(%p,%d)"), a1, z)); returnCode( wattr_off(a1, z, (void *)0));
}


#undef wattrset
int wattrset ( WINDOW * a1, int z)
{
	T((T_CALLED("wattrset(%p,%d)"), a1, z)); returnCode( ((a1)?((a1)->_attrs = (z)):0));
}


#undef wattr_get
int wattr_get ( WINDOW * a1, attr_t * a2, short * a3, void * z)
{
	T((T_CALLED("wattr_get(%p,%p,%p,%p)"), a1, a2, a3, z)); returnCode( ((a1)->_attrs));
}


#undef wattr_set
int wattr_set ( WINDOW * a1, attr_t a2, short a3, void * z)
{
	T((T_CALLED("wattr_set(%p,%s,%d,%p)"), a1, _traceattr2(1,a2), a3, z)); returnCode( ((a1)?((a1)->_attrs = (a2)):0));
}


#undef wdeleteln
int wdeleteln ( WINDOW * z)
{
	T((T_CALLED("wdeleteln(%p)"), z)); returnCode( winsdelln(z,-1));
}


#undef wgetstr
int wgetstr ( WINDOW * a1, char * z)
{
	T((T_CALLED("wgetstr(%p,%s)"), a1, _nc_visbuf2(1,z))); returnCode( wgetnstr(a1, z, -1));
}


#undef winch
chtype winch ( WINDOW * z)
{
	T((T_CALLED("winch(%p)"), z)); returnCode( ((z)?(z)->_line[(z)->_cury].text[(z)->_curx]:0));
}


#undef winchstr
int winchstr ( WINDOW * a1, chtype * z)
{
	T((T_CALLED("winchstr(%p,%p)"), a1, z)); returnCode( winchnstr(a1, z, -1));
}


#undef winsertln
int winsertln ( WINDOW * z)
{
	T((T_CALLED("winsertln(%p)"), z)); returnCode( winsdelln(z,1));
}


#undef winsstr
int winsstr ( WINDOW * a1, const char * z)
{
	T((T_CALLED("winsstr(%p,%s)"), a1, _nc_visbuf2(1,z))); returnCode( winsnstr(a1, z, -1));
}


#undef winstr
int winstr ( WINDOW * a1, char * z)
{
	T((T_CALLED("winstr(%p,%s)"), a1, _nc_visbuf2(1,z))); returnCode( winnstr(a1, z, -1));
}


#undef wstandout
int wstandout ( WINDOW * z)
{
	T((T_CALLED("wstandout(%p)"), z)); returnCode( (((z)?((z)->_attrs = (((1UL) << ((8) + 8)))):0)));
}


#undef wstandend
int wstandend ( WINDOW * z)
{
	T((T_CALLED("wstandend(%p)"), z)); returnCode( (((z)?((z)->_attrs = (0L)):0)));
}
