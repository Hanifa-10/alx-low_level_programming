#include "hash_tables.h"

hash_node_t *add_node(const char *key, const char *value);

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to add to
 * @key: key to add
 * @value: value to store for key
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp = NULL, *new = NULL;

	if (!key || strcmp(key, "") == 0 || !ht || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	for (; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			if (strcmp(tmp->value, value) != 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
			}
			return (1);
		}
	}
	new = add_node(key, value);
	if (new == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
/**
 * add_node - add a new node at the beginning of `hash_node_t` list
 * @key: key to be add
 * @value: value of the key to be add
 * Return: Address of new element or NULL if failed
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new;

	if (!key || strcmp(key, "") == 0 || !value)
		return (NULL);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		if (new->key)
			free(new->key);
		if (new->value)
			free(new->value);
		free(new);
	}
	new->next = NULL;
	return (new);
}
