#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Used to return a pointer
  * to a new allocated space via
  * malloc
  * @str: first operand.
  * Return: char *
  */

char *_strdup(char *str)
{
	int len, i;
	char *s;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	s = malloc((sizeof(char) * len) + 1);
	if (s != NULL)
	{
		i = 0;
		while (i < len)
		{
			*(s + i) = *(str + i);
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
