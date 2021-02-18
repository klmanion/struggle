## src Makefile.am

if DEBUG
AM_CFLAGS = -g -O0
AM_CPPFLAGS = -DDEBUG
else
AM_CFLAGS = -O3
AM_CPPFLAGS = -DNDEBUG
endif

bin_PROGRAMS = struggle
struggle_SOURCES = main.c

struggle_CPPFLAGS = ${AM_CPPFLAGS} @CURSES_CFLAGS@
struggle_LDADD = @CURSES_LIBS@
