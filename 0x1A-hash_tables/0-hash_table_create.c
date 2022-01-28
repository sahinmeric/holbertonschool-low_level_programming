#include "hash_tables.h"
/**
 * hash_table_create-creates a hash table with an array of
 * pointers that points a linked list
 * @size: size of array
 * Return: returns pointer to newly created hash table, or NULL in case erro
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->size = size;
	new->array = malloc(sizeof(hash_table_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; new->array[i]; i++)
		new->array[i] = NULL;
	return (new);
}
