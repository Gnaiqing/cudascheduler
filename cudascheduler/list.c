/*
 * list.c: This file is part of the cuda version of PoCC project
 * Author: Naiqing Guan <guannq@pku.edu.cn>
 */
#include <cudascheduler/list.h>

List*
list_new (void *data)
{
  List *res = XMALLOC (List, 1);

  res->next = NULL;
  res->data = data;

  return res;
}

List*
list_cons (List* head, List* tail)
{
  head->next = tail;
  return head;
}


List*
list_tail (List *head)
{
  return head->next;
}


size_t
list_length (List *head)
{
  size_t n;
  
  for (n = 0; head; ++n)
    head = head->next;

  return n;
}
