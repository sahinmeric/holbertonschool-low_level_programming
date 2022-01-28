#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @size : is the size of the array of the hash table
 * @key: key
 * Return: Return index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
