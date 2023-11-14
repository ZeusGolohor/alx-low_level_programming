#include "hash_tables.h"

/**
 * hash_table_set - A  function that adds an element to the hash table.
 * @ht: a pointer to the hash table.
 * @key: the data to hash to get the index of @value.
 * @value: the data to be stored in the hash table.
 *
 * Return: int.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode, *head;

	if ((key == NULL) || (ht == NULL) || (value == NULL))
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	newnode = create_newnode(key, value);
	if (newnode == NULL)
		return (0);
	if (ht->array[index] == NULL)
		ht->array[index] = newnode;
	else
	{
		head = ht->array[index];
		while (head != NULL)
		{
			if (head == NULL)
				break;
			if (head->next == NULL)
			{
				head->next = newnode;
				break;
			}
			head = head->next;
		}
	}
	return (1);
}

/**
 * create_newnode - A function used to create a new node for the hash table.
 * @key: the data to hash to get the index of @value.
 * @value: the data to be stored in the hash table.
 *
 * Return: hash_node_t *.
 */
hash_node_t *create_newnode(const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t *));
	if (newnode == NULL)
		return (NULL);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	if ((key == NULL) || (value == NULL))
		return (NULL);
	return (newnode);
}
