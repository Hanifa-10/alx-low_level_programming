#include "lists.h"
/**
* sum_listint - returns the sum of all the data(n) of a listint_t linked list
* @head: head node
* Return: the sum of all the data(n) or 0 if list is empty
*/

int sum_listint(listint_t *head)
{
int n = 0;
if (!head)
return (0);

while (head)
{
n += head->n;
head = head->next;
}
return (n);
}

