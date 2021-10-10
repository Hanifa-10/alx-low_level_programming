#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int x, end;

	if (!ht)
		return;
	end = 0;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			tmp = ht->array[x];
			while (tmp)
			{
				if (end == 0)
					printf("%s", "");
				else
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				end++;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
