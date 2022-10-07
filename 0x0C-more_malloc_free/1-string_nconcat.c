#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - Used to concatenate two strings
  * @s1: first operand.
  * @s2: second operand.
  * @n: third operand.
  * Return: char*
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, len_total = 0, i = 0, x;
	char *str = malloc((sizeof(char) * (strlen(s1) + n)) + 1);

	if (str == NULL)
		return (NULL);
	len_s1 = strlen(s1);
	len_s2 = n;
	len_total = len_s1 + len_s2;
	i = 0;
	while (i < len_s1)
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	if (s2 == NULL)
	{
		*(str + i) = '\0';
		return (str);
	}
	if (*s2 != '\0')
	{
		x = 0;
		while (i < len_total)
		{
			*(str + i) = *(s2 + x);
			x++;
			i++;
		}
		if (s1 == NULL)
		{
			*(str + i) = '\0';
		}
	}
	return (str);
}
