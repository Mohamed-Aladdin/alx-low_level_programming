#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: The given hash table.
 * @key: The given key.
 * @value: The given value.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, size;
	hash_node_t *node, *tmp;

	if (!key || !value || !ht)
		return (0);
	size = ht->size;
	idx = key_index((const unsigned char *)key, size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (tmp && strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);

			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);
	node->key = strdup(key);

	if (node->key == NULL)
		return (0);
	node->value = strdup(value);

	if (node->value == NULL)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
