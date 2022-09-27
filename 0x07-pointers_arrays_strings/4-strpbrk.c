#include "main.h"

/**
 * _strpbrk - To search a string
 * for any set of bytes
 * @s: first operand.
 * @accept: second operand.
 * Return: char *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*(s + i) == *(accept + x))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
