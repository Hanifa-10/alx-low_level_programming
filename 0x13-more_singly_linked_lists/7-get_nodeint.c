#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: head node
* @index: index of the node starting from 0
* Return: nth node or NULL if node is empty
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

if (!head)
return (NULL);

while (head && i < index)
{
head = head->next;
i++;
}
return (head);
}

