#include "lists.h"
/**
* free_listint - function that freea a listint_t list
* @head: head node
*/

void free_listint(listint_t *head)
{
listint_t *temp;
while(head)
{
temp = head;
head = head->next;
free(temp);
}
}

