/*
 * list.h: This file is part of the cuda version of PoCC project
 * Author: Naiqing Guan <guannq@pku.edu.cn>
 */
#ifndef _LIST_H
# define _LIST_H

# include <cudascheduler/common.h>

BEGIN_C_DECLS

struct list
{
  void*		data;
  struct list*	next;
};

typedef struct list List;


extern List*	list_new(void *data);
extern List*	list_cons(List *head, List *tail);
extern List*	list_tail(List *head);
extern size_t	list_length(List *head);


END_C_DECLS


#endif // _LIST_H
