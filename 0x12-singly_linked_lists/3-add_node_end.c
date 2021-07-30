#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: first node
* @str: string
* Return: the address of the new element or null if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;

temp->next = new;
return (new);
}
