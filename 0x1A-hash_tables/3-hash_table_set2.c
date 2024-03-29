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

	if (ht == NULL)
		return (0);
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
	else if (ht->size == 1)
	{
		temp = ht->array[index];
		hash_table_loop_n_set(ht, key, value, temp, index);
		return (1);
	}
	else
	{
		temp = ht->array[index];
		hash_table_loop_n_set(ht, key, value, temp, index);
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
	newnode->key = malloc(strlen(key) + 1);
	if (newnode->key == NULL)
		return (NULL);
	newnode->value = malloc(strlen(value) + 1);
	if (newnode->value == NULL)
		return (NULL);
	return (newnode);
}

/**
  * hash_table_loop_n_set - Used to loop through an hashtable and set
  * it values based on some conditions.
  * @ht: hash table.
  * @key: hash key.
  * @value: hash value.
  * @temp: temporaty index storage.
  * @index: hash table key index.
  * Return: void.
  */
int hash_table_loop_n_set(hash_table_t *ht, const char *key, const char *value,
hash_node_t *temp, unsigned long int index)
{
	hash_node_t *newnode;

	while (temp->next != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = realloc(temp->value, strlen(value) + 1);
			strcpy(temp->value, value);
			break;
		}
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = realloc(temp->value, strlen(value) + 1);
			strcpy(temp->value, value);
		}
		else
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
