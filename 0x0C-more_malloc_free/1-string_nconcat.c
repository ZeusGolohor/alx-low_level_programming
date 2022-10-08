#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * loop - used to loop through values
  * @s1: first operand.
  * @s2: second operand.
  * @str: third operand.
  * @i: forth operand.
  * @x: fifth operand.
  * Return: void.
  */
void loop(char *s1, char *s2, char *str, unsigned int i, unsigned int x)
{
	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
		{
			*(str + i) = *(s1 + i);
			i++;
		}
		if (s2 == NULL)
			*(str + i) = '\0';
	}
	if (s2 != NULL)
	{
		while (*(s2 + x) != '\0')
		{
			*(str + i) = *(s2 + x);
			x++;
			i++;
		}
		if (s2 != NULL)
			*(str + i) = '\0';
	}
}

/**
  * string_nconcat - Used to concatenate two strings
  * @s1: first operand.
  * @s2: second operand.
  * @n: third operand.
  * Return: char*
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, len_total = 0, i = 0, x = 0;
	char *str;

	if (s1 != NULL)
		len_s1 = strlen(s1);
	if (s2 != NULL)
	{
		if (n >= strlen(s2))
			len_s2 = strlen(s2);
		else
			len_s2 = n;
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_total = len_s1 + len_s2;
	str = malloc(sizeof(char) * (len_total + 1));
	if (str == NULL)
		return (NULL);
	loop(s1, s2, str, i, x);
	return (str);
}
