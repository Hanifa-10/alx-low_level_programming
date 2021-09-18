#include "lists.h"

/**
 * dlistint_len - Find the number of nodes in a doubly linked list
 * @h: head pointer to LL
 * Return: number of nodes in LL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter += 1;
		h = h->next;
	}
	return (counter);
}
