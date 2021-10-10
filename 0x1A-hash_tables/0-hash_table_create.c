#include "hash_tables.h"

/**
 * hash_table_create -Creates a hash table
 * @size: size of the array
 * Return: new hash table or Null if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head = NULL;

	if (size == 0)
		return (NULL);
	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);

	head->size = size;
	head->array = malloc(sizeof(hash_node_t *) * size);
	if (head->array == NULL)
	{
		free(head);
		return (NULL);
	}
	return (head);
}

