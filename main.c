/*
 * This program implements a simple loop through a small linked list, but it
 * is broken.  When you try to compile this file using the provided Makefile,
 * you will see several errors that say something like "incomplete type" or
 * "incomplete definition of type".  This happens because the linked list
 * is implemented in such a way as not to expose its inner implementation
 * details.  In this recitation exercise, you'll explore how to fix this
 * broken loop without exposing the implementation details of the list.
 */

#include <stdio.h>

#include "list.h"

int main() {
  struct list* list = list_setup();
  // struct link* curr = list->head;  /* This line generates a compiler error. */
  struct list_iterator* itr = list_iterator_create(list);
  int val, i = 0;

  while (list_iterator_has_next(itr)) {
    /*
     * The next two lines each generate a compiler error.
     */
    // printf("== list[%2d]: %d\n", i, curr->val);
    // curr = curr->next;
    val = list_iterator_next(itr);
    printf("== list[%2d]: %d\n", i, val);
    i++;
  }

  return 0;
}
