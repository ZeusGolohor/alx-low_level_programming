#include "lists.h"

/**
  * _strlen - Used to get the length of a string.
  * @str: char *s.
  * Return: unsigned int.
  */

long int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
