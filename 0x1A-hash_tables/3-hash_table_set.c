#include "hash_tables.h"

/**
  * hash_table_set - Used to add or update a value on the hash table.
  * @ht: The hash table.
  * @key: The key to the value.
  * @value: value.
  * Return: int.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *prt_to_node, *newnode;

	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	prt_to_node = ht->array[index];
	if (prt_to_node != NULL)
	{
		if (strcmp(prt_to_node->key, key))
			strcpy(prt_to_node->value, value);
	}
	else
	{
		newnode = malloc(sizeof(hash_node_t));
		if (newnode == NULL)
			return (0);
		newnode->key = malloc((strlen(key) + 1));
		newnode->value = malloc((strlen(value) + 1));
		strcpy(newnode->key, key);
		strcpy(newnode->value, value);
		ht->array[index] = newnode;
	}
	return (1);
}
