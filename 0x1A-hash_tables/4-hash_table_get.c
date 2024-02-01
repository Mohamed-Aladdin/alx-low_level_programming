#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: The given hash table.
 * @key: The given key.
 *
 * Return: The value associated with the element, or NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *pos;
	unsigned long int idx;

	if (!(ht && key && *key))
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	pos = ht->array[idx];

	while (pos)
	{
		if (strcmp(pos->key, key) == 0)
			return (pos->value);
		pos = pos->next;
	}

	return (NULL);
}
