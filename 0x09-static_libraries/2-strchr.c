#include "main.h"

/**
  * _strchr - _strchr
  * @s: first operand.
  * @c: second o[erand.
  * Return: char.
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}

