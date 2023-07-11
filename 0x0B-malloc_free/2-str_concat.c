#include "main.h"

/**
 * str_concat - A  function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: char *.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_size, s2_size, y = 0, i = 0, total_size = 0;
	char *str;

	s1_size = get_size(s1);
	s2_size = get_size(s2);
	total_size = (s1_size + s2_size + 1);
	str = malloc(sizeof(char) * total_size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1_size; i++)
		str[i] = s1[i];	
	for (y = 0; y < s2_size; y++)
	{
		str[i] = s2[y];
		i = i + 1;
	}
	str[i + 1] = '\0';
	return (str);
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
		count = count + 1;
	return (count);
}
