#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reserve a string
 * @s: first operand
 * Return: void
*/
void rev_string(char *s)
{
	int i;
	int strLen = strlen(s);
	char oldS[10];
/**	int oldSLen;*/

	for (i = 0; i <= strLen; i++)
	{
		oldS[i] = *(s + i);
	}

	/**oldSLen = strlen(oldS);*/
	for (i = 1; i <= strLen; i++)
	{
		if (*(oldS + (strlen(oldS) - i)) != '0')
			*(s + i) = *(oldS + (strlen(oldS) - i));
	}

	
}
