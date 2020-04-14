/*
 * xstrdup.c: This file is part of the cuda version of PoCC project
 * Author: Naiqing Guan <guannq@pku.edu.cn>
 */
#ifndef WITH_DMALLOC

#if HAVE_CONFIG_H
#  include <cudascheduler/config.h>
#endif

#include <cudascheduler/common.h>

char *
xstrdup (const char *string)
{
  return string ? strcpy (xmalloc (strlen (string) + 1), string) : NULL;
}

#endif /* !WITH_DMALLOC */
