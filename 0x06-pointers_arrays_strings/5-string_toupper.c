#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - converts strings to
 * uppercase
 * @s: first operand
 * Return: char *
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);
	}
	return (s);
}
