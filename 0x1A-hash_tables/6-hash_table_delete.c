#include "hash_tables.h"

/**
  * hash_table_delete - Used to delete a hash table.
  * @ht: pointer to hash table.
  * Return: void.
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *hash, *temp;

	if (ht != NULL)
	{
		index = 0;
		while (index < ht->size)
		{
			hash = ht->array[index];
			if (hash == NULL)
				free(hash);
			else if (hash->next == NULL)
			{
				free(hash->key);
				free(hash->value);
				free(hash);
			}
			else
			{
				while (hash)
				{
					temp = hash->next;
					free(hash->key);
					free(hash->value);
					free(hash);
					hash = temp;
				}
			}
			index++;
		}
		free(ht->array);
		free(ht);
	}
}
