#include "lists.h"

/**
* free_list - frees a list_t list
* @head: first node
*/

void free_list(list_t *head)
{
list_t *new;

while (head != NULL)
{
new = head;
head = head->next;
free(new->str);
free(new);
}
}

