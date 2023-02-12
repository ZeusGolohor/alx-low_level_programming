#include "hash_tables.h"

/**
  * hash_table_print - Used to print an hash table.
  * @ht: pointer to hash table.
  * Return: void.
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, seen = 0;
	hash_node_t *temp;

	if (ht != NULL)
	{
	printf("{");
	index = 0;
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			if (seen >= 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			seen++;
			if (ht->array[index]->next != NULL)
			{
				temp = ht->array[index]->next;
				while (temp)
				{
					if (seen >= 1)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
					seen++;
					temp = temp->next;
				}
			}
		}
		index++;
	}
	printf("}\n");
	}
}
