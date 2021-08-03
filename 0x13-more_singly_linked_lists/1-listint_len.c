#include "lists.h"
/**
* listint_len - get number of elements in a linked list
* @h: head node
* Return: number of elements in the linked list
*/

size_t listint_len(const listint_t *h)
{
size_t s = 0;

if (!h)
return (s);

while (h)
{
h = h->next;
s++;
}
return (s);
}


