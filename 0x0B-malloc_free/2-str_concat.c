#include "main.h"
#include <stdlib.h>

/**
  * str_concat - combines two strings
  * together
  * @s1: first operand.
  * @s2: second operand.
  * Return: char *.
  */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len_s1 = 0, len_s2 = 0, len_total, i = 0, x = 0;

	if (s1 == NULL || s2 == NULL)
	{
		str = malloc(sizeof(char) * 1);
		if (str != NULL)
			*(str + 0) = '\0';
		else
			return (NULL);
	}
	while (*(s1 + len_s1) != '\0')
		len_s1++;
	while (*(s2 + len_s2) != '\0')
		len_s2++;
	len_total = len_s1 + len_s2;
	str = malloc((sizeof(char) * len_total) + 1);
	if (str != NULL)
	{
		strasn(s1, s2, str, len_s1, len_s2, len_total, i, x);
	}
	else
		return (NULL);
	return (str);
}

/**
  * strasn - used to check
  * string len
  * @s1: first operand.
  * @s2: second operand.
  * @str: third operand.
  * @len_s1: forth operand.
  * @len_s2: fifth operand.
  * @len_total: sixth operand.
  * @i: seventh operand.
  * @x: eighth operand.
  * Return: int.
  */

void strasn(char *s1, char *s2, char *str, unsigned int len_s1, unsigned int
		len_s2, unsigned int len_total, unsigned int i, unsigned int x)
{
	while (i < len_s1)
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	x = len_total - len_s2;
	i = 0;
	while (x < len_total)

	{
		*(str + x) = *(s2 + i);
		x++;
		i++;
	}
	*(str + x) = '\0';
}
