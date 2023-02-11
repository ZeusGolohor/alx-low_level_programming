#include "hash_tables.h"

/**
  * hash_table_prhash_table_printint - Used to print an hash table.
  * @ht: pointer to hash table.
  * Return: void.
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, seen = 0;

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
		}
		index++;
	}
	printf("}\n");
}
