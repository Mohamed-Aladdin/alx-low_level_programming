#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: The given size.
 *
 * Return: Returns a pointer to the newly created hash table or NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *map;

	if (!size)
		return (NULL);
	map = calloc(1, sizeof(hash_table_t));

	if (!map)
		return (NULL);
	map->size = size;
	map->array = calloc(map->size, sizeof(hash_node_t *));

	if (!map->array)
	{
		free(map);
		return (NULL);
	}
	return (map);
}
