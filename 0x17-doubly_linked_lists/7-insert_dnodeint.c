#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	for (i = 0; current && i < idx; i++)
		current = current->next;
	if (!current && i == idx)
		return (add_dnodeint_end(h, n));
	else if (current)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		current->prev->next = new_node;
		new_node->prev = current->prev;
		current->prev = new_node;
		new_node->next = current;
		return (new_node);
	}
	return (NULL);
}
