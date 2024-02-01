#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table.
 * @size: The given size.
 *
 * Return: Returns a pointer to the newly created hash table or NULL.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: The given hash table.
 * @key: The given key.
 * @value: The given value.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *temp;
	char *temp_val;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	temp_val = strdup(value);
	if (temp_val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = temp_val;
			return (1);
		}
		temp = temp->snext;
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(temp_val);
		return (0);
	}
	node->key = strdup(key);
	if (new->key == NULL)
	{
		free(temp_val);
		free(node;
		return (0);
	}
	node->value = temp_val;
	node->next = ht->array[idx];
	ht->array[idx] = node;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		node->sprev = temp;
		node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: The given hash table.
 * @key: The given key.
 *
 * Return: The value associated with the element, or NULL.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - prints a hash table.
 * @ht: The given hash table.
 *
 * Return: Void.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash tables key/value
 * pairs in reverse order using the sorted linked list.
 * @ht: The given hash table.
 *
 * Return: Void.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * hash_table_delete - deletes a hash table.
 * @ht: The given hash table.
 *
 * Return: Void.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(head->array);
	free(head);
}
