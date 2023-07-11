#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: the string to be copied.
 *
 * Return: char *.
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *_str;

	size = get_size(str);
	_str = malloc((sizeof(char) * size) + 1);
	if (_str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		_str[i] = str[i];
	}
	_str[i] = '\0';
	return (_str);
}

/**
 * get_size - Used to get the size of a string.
 * @str: the string size to be gotten.
 *
 * Return: unsigned int.
 */
unsigned int get_size(char *str)
{
	unsigned int i, count = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		count = count + 1;
	}
	return (count);
}
