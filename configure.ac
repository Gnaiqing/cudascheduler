dnl
dnl configure.ac: This file is part of the cuda version of PoCC project
dnl Author: Naiqing Guan <guannq@pku.edu.cn>

#############################################################################
## Require for autoconf >= 2.54.
AC_PREREQ([2.54])

#############################################################################
## Fill here the @bug email adress.
AC_INIT([cudascheduler], [0.1.0], [bug@bogus.com])
## Automatic generation of config.h
AC_CONFIG_HEADERS([cudascheduler/include/cudascheduler/config.h:cudascheduler/include/cudascheduler/config-h.in])
## A common file, which should be included by every source file.
AC_CONFIG_SRCDIR([cudascheduler/include/cudascheduler/common.h])
## Put as most as possible configuration files to an auxialiry
## directory.
AC_CONFIG_AUX_DIR([config])
## Initialize automake. Here, a special tar version that enables
## (very) long filenames.
AM_INIT_AUTOMAKE([1.9 tar-ustar no-define foreign dist-bzip2])
#############################################################################

## Use C language.
AC_PROG_CC
## Use libtool to generate libraries.
AC_PROG_LIBTOOL


## Check for some essential headers.
AC_HEADER_STDC
AC_CHECK_HEADERS([errno.h stddef.h stdlib.h string.h strings.h unistd.h])

## Check for some essential C properties.
AC_C_CONST
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_C_VOLATILE



#############################################################################
## Configure Makefiles.
AC_CONFIG_FILES([
	Makefile
	doc/Makefile
	cudascheduler/Makefile
	src/Makefile
	tests/Makefile
	],
	[test -z "$CONFIG_HEADERS" || echo timestamp > cudascheduler/stamp-h.in])

## Output the result.
AC_OUTPUT
