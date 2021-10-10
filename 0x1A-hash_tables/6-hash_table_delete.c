#include "hash_tables.h"

/**
 * hash_table_delete - function to delete hash table
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int x;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			while (ht->array[x])
			{
				tmp = ht->array[x];
				free(tmp->key);
				free(tmp->value);
				ht->array[x] = ht->array[x]->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
