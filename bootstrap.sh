#!/bin/sh
# bootstrap.sh: This file is part of the cuda version of PoCC project
# Author: Naiqing Guan <guannq@pku.edu.cn>
aclocal -I config
libtoolize --force --copy
autoreconf -vfi
