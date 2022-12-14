#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Used to allocate memory for an array.
  * @nmemb: first operand.
  * @size: second operand.
  * Return: void *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, s = nmemb * size;
	void *array = malloc(s);
	char *a = array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < s)
	{
		*(a + i) = 0;
		i++;
	}
	return (array);
}
