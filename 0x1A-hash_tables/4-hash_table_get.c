#include "hash_tables.h"

/**
  * hash_table_get - Used to get values from the hash table.
  * @ht: hash table.
  * @key: hash table key.
  * Return: char *.
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	else if (ht->array[index]->next == NULL)
	{
		return (ht->array[index]->value);
	}
	else
	{
		temp = ht->array[index];
		while (temp->next != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
		if (temp->next == NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
		}
	}
	return (NULL);
}
