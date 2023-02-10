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
	hash_node_t *newnode, *temp;

	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		newnode = create_new_node(key, value);
		if (newnode == NULL)
			return (0);
		strcpy(newnode->key, key);
		strcpy(newnode->value, value);
		newnode->next = NULL;
		ht->array[index] = newnode;
	}
	else
	{
		temp = ht->array[index];
		while (temp->next != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = realloc(temp->value, (sizeof(value) + 1));
				strcpy(temp->value, value);
				break;
			}
			temp = temp->next;
		}
		if (temp->next == NULL)
		{
			newnode = create_new_node(key, value);
			if (newnode == NULL)
				return (0);
			strcpy(newnode->key, key);
			strcpy(newnode->value, value);
			newnode->next = ht->array[index];
			ht->array[index] = newnode;
		}
	}
	return (1);
}

/**
  * create_new_node - Used to creare new node to
  * be inserted into the hash table.
  * @key: const char *
  * @value: const char *
  * Return: hash_node_t *.
  */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (NULL);
	newnode->key = malloc(sizeof(strlen(key) + 1));
	if (newnode->key == NULL)
		return (NULL);
	newnode->value = malloc(sizeof(strlen(value) + 1));
	if (newnode->value == NULL)
		return (NULL);
	return (newnode);
}
