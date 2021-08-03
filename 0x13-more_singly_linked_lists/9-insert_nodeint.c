#include "lists.h"

/**
* insert_node_at_index - function to insert a new nodeat a given position
* @idx: the index of the list to insert the new node
* @head: head node
* @n: data to insert in the new node
* Return: pointer to the new node, NULL if it fails
*/

listint_int *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else 
temp = temp->next;
}
return (NULL);
}
