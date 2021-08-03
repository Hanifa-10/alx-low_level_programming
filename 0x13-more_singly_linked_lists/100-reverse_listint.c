#include "lists.h"
/**
* reverse_listint - reverses a linked list
* @head: head node
* Return: pointer to the first node in thenew list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *old = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = old;
old = *head;
*head = next;
}
*head = old;
return (*head);
}

