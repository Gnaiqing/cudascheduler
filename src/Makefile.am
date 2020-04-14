#
# Makefile.am: This file is part of the cuda version of PoCC project
# Author: Naiqing Guan <guannq@pku.edu.cn>

#############################################################################
SUBDIRS			=

#############################################################################
MAINTAINERCLEANFILES	= Makefile.in

INCLUDES		= -I$(top_builddir) -I$(top_builddir)/cudascheduler \
			-I$(top_srcdir) -I$(top_srcdir)/cudascheduler

#############################################################################


noinst_HEADERS		= cudascheduler.h

bin_PROGRAMS		= cudascheduler

cudascheduler_SOURCES		= cudascheduler.c 

cudascheduler_LDADD		= $(top_srcdir)/cudascheduler/libcudascheduler.la
