#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - print string
 * in reverse format
 * @s: first operand
 * Return: void
 */

void rev_string(char *s)
{
	unsigned int len, i, x;
	char *str;

	len = strlen(s);
	str = malloc((sizeof(char) * len) + 1);
	i = 0;
	x = 1;
	while (i < len)
	{
		*(str + i) = *(s + (len - x));	
		i++;
		x++;
	}
	*(str + i) = '\0';
	i = 0;
	while (i < len)
	{
		*(s + i) = *(str + i);
		i++;
	}
	*(s + i) = '\0';
	free(str);
}
