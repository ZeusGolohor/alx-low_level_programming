#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: number of memory byte to be allocated.
 * @size: size of each @nmemb.
 *
 * Return: void*.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;
	unsigned int i, total = (nmemb * size);

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	temp = malloc(total);
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
	{
		temp[i] = 0;
	}
	return (temp);
}

