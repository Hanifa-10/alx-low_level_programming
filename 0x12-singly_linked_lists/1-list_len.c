#include "lists.h"
#include <stdlib.h>
/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to the list to check
* Return: the numberof elements in a linked list
*/

size_t list_len(const list_t *h)
{
int c = 0;

while (h)
{	
h = h->next;
c++;
}
return (c);
}

