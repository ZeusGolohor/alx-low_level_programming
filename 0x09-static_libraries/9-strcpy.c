#include "main.h"

/**
  * _strcpy - _strcpy
  * @dest: first operand.
  * @src: second operand.
  * Return: char.
  */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

