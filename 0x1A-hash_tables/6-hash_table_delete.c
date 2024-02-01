#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: The given hash table.
 *
 * Return: Void.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *node;

	if (!ht || !ht->array || !ht->size)
		return;

	for (j = 0; j < ht->size; j++)
	{
		while (ht->array[j])
		{
			node = ht->array[j]->next;
			free(ht->array[j]->key);
			free(ht->array[j]->value);
			free(ht->array[j]);
			ht->array[j] = node;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
