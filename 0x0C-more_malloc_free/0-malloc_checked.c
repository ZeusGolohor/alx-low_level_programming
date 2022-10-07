#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Using malloc to allocate memory
  * @b: first operand.
  * Return: void *
  */

void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
