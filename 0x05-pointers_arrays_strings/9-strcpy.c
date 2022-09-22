#include "main.h"
#include <string.h>

/**
 * _strcpy - Used to copy
 * a string
 * @dest: first operand
 * @src: second operand
 * Return: char *
 */

char *_strcpy(char *dest, char *src)
{
	/**
	 * copy string src
	 * into dest
	 */
	strcpy(dest, src);
	return (dest);
}
