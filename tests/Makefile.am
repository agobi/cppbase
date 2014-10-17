check_PROGRAMS=

check_PROGRAMS+=tests/test1
tests_test1_SOURCES=tests/test1.cc
tests_test1_CPPFLAGS=-I$(top_srcdir)/src $(GTEST_CPPFLAGS)
tests_test1_CXXFLAGS=$(GTEST_CXXFLAGS)
tests_test1_LDFLAGS=$(GTEST_LDFLAGS)
tests_test1_LDADD=$(top_builddir)/libseegull.la -lgtest_main

TESTS=$(check_PROGRAMS)
