#include "lists.h"
/**
* add_nodeint - add new node at the start of the list
* @head: head node
* @n: constant integer
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

if (head == NULL)
return (NULL);

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;

*head = new;
 return (new);
}

