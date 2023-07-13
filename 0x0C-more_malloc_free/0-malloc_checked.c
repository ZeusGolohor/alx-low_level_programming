#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: size of the memory to allocate.
 *
 * Return: void*.
 */
void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);
	if (temp == NULL)
	{
		exit(98);
	}
	return (temp);
}
