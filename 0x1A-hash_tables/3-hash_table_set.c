#include "hash_tables.h"

/**
 * hash_table_set- function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	ht->array[index] = new;
	return (1);
}
