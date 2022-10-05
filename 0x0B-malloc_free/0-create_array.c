#include "main.h"
#include <stdlib.h>

/**
  * create_array - malloc and free
  * usage
  * @size: first operand.
  * @c: second operand.
  * Return: char *
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	if (s != NULL)
	{
		i = 0;
		while (i < size)
		{
			*(s + i) = c;
			i++;
		}
		*(s + i) = '\0';
	}
	else
	{
		return (NULL);
	}
	return (s);
}
