#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key.
 * @key: the key for which you want to get the index.
 * @size: the size of the hash table.
 *
 * Return: unsinged long int.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size); 
}
