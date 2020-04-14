/*
 * xmalloc.c: This file is part of the cuda version of PoCC project
 * Author: Naiqing Guan <guannq@pku.edu.cn>
 */
#if HAVE_CONFIG_H
# include <cudascheduler/config.h>
#endif

#include <cudascheduler/common.h>
#include <cudascheduler/error.h>

void *
xmalloc (size_t num)
{
  void *new = malloc (num);
  if (! new)
    cudascheduler_fatal ("Memory exhausted");
  return new;
}

void *
xrealloc (void *p, size_t num)
{
  void *new;

  if (! p)
    return xmalloc (num);

  new = realloc (p, num);
  if (! new)
    cudascheduler_fatal ("Memory exhausted");

  return new;
}

void *
xcalloc (size_t num, size_t size)
{
  void *new = xmalloc (num * size);
  bzero (new, num * size);
  return new;
}
