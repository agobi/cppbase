ACLOCAL_AMFLAGS=-I m4
EXTRA_DIST=autogen.sh

lib_LTLIBRARIES=libseagull.la
libseagull_la_SOURCES=src/test.cc
libseagull_la_CPPFLAGS=-I$(top_srcdir)/src
pkginclude_HEADERS=$(top_srcdir)/src/seagull/test.h

check_PROGRAMS=

if HAVE_GMOCK
check_PROGRAMS+=tests/test1
tests_test1_SOURCES=tests/test1.cc
tests_test1_CPPFLAGS=-I$(top_srcdir)/src $(GTEST_CPPFLAGS) $(GMOCK_CPPFLAGS)
tests_test1_CXXFLAGS=$(GTEST_CXXFLAGS) $(GMOCK_CXXFLAGS)
tests_test1_LDFLAGS=$(GTEST_LDFLAGS) $(GMOCK_LDFLAGS)
tests_test1_LDADD=$(top_builddir)/libseagull.la $(GTEST_LIBS) $(GMOCK_LIBS) -lgtest_main
endif

TESTS=$(check_PROGRAMS)

TESTS_ENVIRONMENT_WITH_VALGRIND="$(LIBTOOL) --mode=execute valgrind --leak-check=full"

.PHONY: check-with-valgrind
check-with-valgrind:
	$(MAKE) $(AM_MAKEFLAGS) check TESTS_ENVIRONMENT=$(TESTS_ENVIRONMENT_WITH_VALGRIND)

include Makefile.am.coverage
include Makefile.am.checkstyle
