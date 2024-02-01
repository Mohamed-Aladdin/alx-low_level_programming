#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: The given key.
 * @size: The given size.
 *
 * Return: The index at which the key/value pair should
 * be stored in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
	{
		return (0);
	}

	return (hash_djb2(key) % size);
}
