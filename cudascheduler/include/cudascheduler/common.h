/*
 * common.h: This file is part of the cuda version of PoCC project
 * Author: Naiqing Guan <guannq@pku.edu.cn>
 */
#ifndef _COMMON_H
# define _COMMON_H

# if HAVE_CONFIG_H
#  include <config.h>
# endif

# include <stdio.h>
# include <sys/types.h>

# if STDC_HEADERS
#  include <stdlib.h>
#  include <string.h>
# elif HAVE_STRINGS_H
#  include <strings.h>
# endif /*STDC_HEADERS*/

# if HAVE_UNISTD_H
#  include <unistd.h>
# endif


# ifdef __cplusplus
#  define BEGIN_C_DECLS         extern "C" {
#  define END_C_DECLS           }
# else
#  define BEGIN_C_DECLS
#  define END_C_DECLS
# endif


# ifdef __GNUC__
#  ifndef const
#    define const       __const
#  endif
#  ifndef signed
#    define signed      __signed
#  endif
#  ifndef volatile
#    define volatile    __volatile
#  endif
# else
#  ifdef __STDC__
#    undef  signed
#    define signed
#    undef  volatile
#    define volatile
#  endif
# endif

# ifdef __STDC__
#  define STR(x)          #x
#  define CONC(x, y)      x##y
# else
#  define STR(x)          "x"
#  define CONC(x, y)      x/**/y
# endif


# ifndef EXIT_SUCCESS
#  define EXIT_SUCCESS  0
#  define EXIT_FAILURE  1
# endif


# define XCALLOC(type, num)                                  \
        ((type *) xcalloc ((num), sizeof(type)))
# define XMALLOC(type, num)                                  \
        ((type *) xmalloc ((num) * sizeof(type)))
# define XREALLOC(type, p, num)                              \
        ((type *) xrealloc ((p), (num) * sizeof(type)))
# define XFREE(stale)                            do {        \
        if (stale) { free (stale);  stale = 0; }            \
                                                } while (0)

BEGIN_C_DECLS

extern void *xcalloc    (size_t num, size_t size);
extern void *xmalloc    (size_t num);
extern void *xrealloc   (void *p, size_t num);
extern char *xstrdup    (const char *string);
extern char *xstrerror  (int errnum);


END_C_DECLS

#endif // _COMMON_H
