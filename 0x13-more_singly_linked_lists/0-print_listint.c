#include "lists.h"
#include <stdlib.h>

/**
* print_listint - function that prints all elements of a list
* @h: head node
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
int c = 0;
if (!h)
return (c);
while (h)
{
printf("%i\n", h->n);

h = h->next;
c++;
}
return (c);
}

