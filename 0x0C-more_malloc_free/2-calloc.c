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
	void *temp;

	if ((nmemb == 0) || (size == 0))
		return (0);
	temp = malloc(nmemb * size);
	if (temp == NULL)
		return (NULL);
	return (temp);
}
