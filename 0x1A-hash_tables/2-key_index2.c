#include "hash_tables.h"

/**
  * key_index - Used to get index to a value on the hash table.
  * @key: key to the stored value.
  * @size: size of the hash table.
  * Return: unsigned long int.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
