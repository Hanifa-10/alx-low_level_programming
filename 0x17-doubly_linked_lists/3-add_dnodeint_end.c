#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a `dlistint_t` list
 * @head: double pointer to head node
 * @n: value to store in new node
 * Return: Address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	tmp = *head;

	while (tmp != NULL && tmp->next != NULL)
		tmp = tmp->next;

	if (tmp)
	{
		new->n = n;
		new->next = NULL;
		tmp->next = new;
		new->prev = tmp;
	}
	else
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}
