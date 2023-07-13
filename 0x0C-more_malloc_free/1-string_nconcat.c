#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: first string to be concatenated.
 * @s2: second string to be concatenated.
 * @n: number of characters to concatenate from @s2.
 *
 * Return: char *.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size, i, y = 0;
	char *str;

	s1_size = get_size(s1);
	str = malloc((sizeof(char) * (s1_size + n)) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1_size; i++)
		str[i] = s1[i];
	for (y = 0; y < n; y++)
	{
		str[i] = s2[y];
		i++;
	}
	str[i] = '\0';
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
