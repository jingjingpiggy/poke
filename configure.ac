AC_INIT([poke], [1.0])
AM_INIT_AUTOMAKE([-Wall foreign subdir-objects])
AM_CONFIG_HEADER(config.h:config.in)
AC_PROG_CC

# Check for standard C headers 
AC_HEADER_STDC

# Check whether a particular header file exists
AC_CHECK_HEADERS(utime.h)

# Check for a particular string in a particular header file
AC_EGREP_HEADER(utimebuf, utime.h, AC_DEFINE(HAVE_STRUCT_UTIMBUF))

# Check whether 'utime' accepts a NULL second argument to set the
# file change time to the current time
AC_FUNC_UTIME_NULL

AC_OUTPUT(Makefile)
