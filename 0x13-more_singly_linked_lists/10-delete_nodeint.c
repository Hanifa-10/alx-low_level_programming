#include "lists.h"
/**
* delete_node_at_index - deletes a node at a certain index in a linked list
* @head: head node
* @index: index of the node to delete
* Return: 1 if for success and -1 for fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = *head;
listint_t *current = NULL;

if (!*head)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
while (i < index -1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}

