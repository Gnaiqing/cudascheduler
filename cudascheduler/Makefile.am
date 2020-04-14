#
# Makefile.am: This file is part of the cuda version of PoCC project
# Author: Naiqing Guan <guannq@pku.edu.cn>

#############################################################################
SUBDIRS			=

#############################################################################
MAINTAINERCLEANFILES	= Makefile.in

INCLUDES		= -I$(top_builddir) -I$(top_srcdir) \
			   -I$(top_builddir)/cudascheduler/include \
		           -I$(top_srcdir)/cudascheduler/include

#############################################################################

pkginclude_HEADERS 	=			\
	include/cudascheduler/error.h			\
	include/cudascheduler/common.h		\
	include/cudascheduler/list.h

lib_LTLIBRARIES 	= libcudascheduler.la


libcudascheduler_la_SOURCES 	= 			\
	error.c					\
	list.c 					\
	xmalloc.c 				\
	xstrdup.c 				\
	xstrerror.c
