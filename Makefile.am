#
# Makefile.am: This file is part of the cuda version of PoCC project
# Author: Naiqing Guan <guannq@pku.edu.cn>

#############################################################################
SUBDIRS 		= doc cudascheduler src tests


#############################################################################
ACLOCAL_AMFLAGS		= -I config

CONFIGURE_DEPENDENCIES 	= $(srcdir)/config/cudascheduler.m4

m4datadir		= $(datadir)/aclocal

dist_m4data_DATA	= config/cudascheduler.m4

AUX_DIST                =			\
	$(ac_aux_dir)/config.guess		\
	$(ac_aux_dir)/config.sub		\
	$(ac_aux_dir)/install-sh		\
	$(ac_aux_dir)/ltconfig			\
	$(ac_aux_dir)/ltmain.sh			\
	$(ac_aux_dir)/mdate-sh			\
	$(ac_aux_dir)/missing			\
	$(ac_aux_dir)/mkinstalldirs


AUX_DIST_EXTRA          =			\
	$(ac_aux_dir)/cudascheduler.m4


EXTRA_DIST		= 			\
	bootstrap.sh


MAINTAINERCLEANFILES 	=			\
	Makefile.in				\
	aclocal.m4				\
	configure				\
	cudascheduler/include/cudascheduler/config-h.in	\
	cudascheduler/stamp-h.in			\
	$(AUX_DIST)


dist-hook:
	(cd $(distdir) && mkdir -p $(ac_aux_dir))
	for file in $(AUX_DIST) $(AUX_DIST_EXTRA); do \
	  cp $$file $(distdir)/$$file; \
	done
#############################################################################
