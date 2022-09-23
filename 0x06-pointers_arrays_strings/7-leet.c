#include "main.h"

/**
 * leet - Encodes a string.
 * @s: first operand.
 * Return: char *
 */

char *leet(char *s)
{
	int i, x;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 5; x++)
		{
			if (s[i] == s1[x] || s[i] == S1[x])
			{
				s[i] = s2[x];
				break;
			}
		}
	}
	return (s);
}
