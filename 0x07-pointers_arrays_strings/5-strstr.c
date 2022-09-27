#include "main.h"

/**
 * _strstr - used to locate a
 * substring
 * @haystack: first operand.
 * @needle: second operand.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, x, y;

	y = 0;
	while (*(needle + y) > '\0')
	{
		y++;
	}
	
	char *new[y];

	for (i = 0; *(needle + i) > '\0'; i++)
	{
		for (x = 0; *(haystack + x) > '\0'; x++)
		{
			if (*(needle + i) == *(haystack + x))
			{
				new[i] = needle[i];
			}
		}
	}
	if (new > '\0')
		return (new);
	return ('\0');
}
