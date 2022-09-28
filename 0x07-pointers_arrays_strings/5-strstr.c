#include "main.h"
#include <string.h>

/**
 * _strstr - used to locate a
 * substring
 * @haystack: first operand.
 * @needle: second operand.
 * Return: char *
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
