#include "main.h"

/**
 * _realloc - A function that reallocates a memory block using malloc and
 * free.
 * @ptr: pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size).
 * @old_size: size of @ptr.
 * @new_size: new size of @ptr.
 *
 * Return: void *.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp, *_ptr = ptr;
	unsigned int i;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		temp = malloc(old_size + new_size);
		if (temp == NULL)
			return (NULL);
	}
	else
	{
		temp = malloc(old_size + new_size);
		if (temp == NULL)
			return (NULL);
	}
	if (_ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			temp[i] = _ptr[i];
	}
	if (new_size < old_size)
	{
		for (i = old_size; i < new_size; i++)
		{
			temp[i] = 0;
		}
	}
	free(ptr);
	return (temp);
}
