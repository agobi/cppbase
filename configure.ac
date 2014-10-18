AC_INIT([seegull], [0.1.0], [attila.gobi@gmail.com])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Werror foreign subdir-objects parallel-tests])
AC_CONFIG_SRCDIR([src/test.cc])

m4_ifdef([AM_PROG_AR], [AM_PROG_AR])
LT_INIT

AC_PROG_CC
AC_PROG_CXX
AC_LANG([C++], [C])


m4_include(m4/gmock.m4)
GMOCK_LIB_CHECK(1.7.0, [], [false])
m4_include(m4/gtest.m4)
GTEST_LIB_CHECK(1.7.0, [], [false])

AC_CHECK_PROG(HAVE_PYTHON, python, yes, no)
AC_CHECK_COVERAGE
AX_CXX_COMPILE_STDCXX_11

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT

AC_MSG_RESULT([
Configure Information:
  C Compiler        : $CC
    DEFS            :   $DEFS
    CPPFLAGS        :   $CPPFLAGS
    CFLAGS          :   $CFLAGS

  C++ Compiler      : $CXX
    DEFS            :   $DEFS
    CPPFLAGS        :   $CPPFLAGS
    CXXFLAGS        :   $CXXFLAGS

  Linker            : $LD
    LDFLAGS         :   $LDFLAGS
    LIBS            :   $LIBS

  Coding Style Checks   : $HAVE_PYTHON

  Coverage Reports      : $ENABLE_COVERAGE
])
