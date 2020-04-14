#
# Makefile.am: This file is part of the cuda version of PoCC project
# Author: Naiqing Guan <guannq@pku.edu.cn>

#############################################################################
SUBDIRS			= 

#############################################################################

MAINTAINERCLEANFILES    = Makefile.in

TESTS_ENVIRONMENT       = top_builddir=$(top_builddir) SRCDIR=$(srcdir)

#############################################################################

EXTRA_DIST              = checker.sh

testsubdir              = test_suite

check_SCRIPTS		= checker.sh

## Replace by program names when needed
# check_PROGRAMS = ...
TESTS			 = $(check_SCRIPTS) 

EXTRA_DIST		 += 			\
			empty.test


#############################################################################
distclean-local:
	rm -rf $(testsubdir)
