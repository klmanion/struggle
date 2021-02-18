## configure.ac

AC_PREREQ([2.69])
AC_INIT([struggle], [0.0.0], [klmanion@gmail.com])
AC_CONFIG_AUX_DIR([build-aux])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_MACRO_DIR([m4])

AC_PROG_CC
AC_LANG_C

AC_HEADER_STDC
AC_HEADER_ASSERT
AC_HEADER_STDBOOL
AC_CHECK_HEADERS([locale.h])

AC_FUNC_MALLOC

## check for pkg-config
## must be installed to run autoconf
## user installation not required, but supported
PKG_PREREQ
PKG_PROG_PKG_CONFIG([0.16])

AX_WITH_CURSES

AC_ARG_ENABLE([debug],
	      AS_HELP_STRING([--enable-debug],
			     [enable the DEBUG macro]))
AM_CONDITIONAL([DEBUG], [test x"$enable_debug" = x"yes"])

AC_CONFIG_FILES([
  Makefile
  src/Makefile
])

AC_OUTPUT

