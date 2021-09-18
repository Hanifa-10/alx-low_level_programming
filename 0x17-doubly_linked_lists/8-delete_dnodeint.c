#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index of a `dlistint_t` LL
 * @head: double pointer to head of LL
 * @index: index position to remove from LL
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *deleted_node;

	deleted_node = get_dnodeint_at_index(*head, index);
	if (!*head || !deleted_node)
		return (-1);

	if (*head == deleted_node)
		*head = deleted_node->next;

	if (deleted_node->next)
		deleted_node->next->prev = deleted_node->prev;

	if (deleted_node->prev)
		deleted_node->prev->next = deleted_node->next;

	free(deleted_node);
	return (1);
}
/**
 * get_dnodeint_at_index - Function that returns
 * the nth node of a dlistint_t linked list
 * @head: Head of the doubly linked list
 * @index: Index of the node to be returned
 *
 * Return: A pointer to the the node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	if (!head)
		return (NULL);
	node = head;
	for (; index > 0 && node; index--)
		node = node->next;
	return (node);
}
