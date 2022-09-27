#include "main.h"

/**
 * _strstr - used to locate a
 * substring
 * @haystack: first operand.
 * @needle: second operand.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (x = 0; *(haystack + x) != '\0'; x++)
		{
			if (*(needle + i) == *(haystack + x))
			{
				if (*(needle + (i + 1)) == *(haystack + (x + 1)))
				{
					return (needle + i);
				}
			}
		}
	}
	return ('\0');
}
