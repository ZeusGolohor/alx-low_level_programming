#include "main.h"

/**
  * binary_to_uint - Used to convert binary to unsigned int.
  * @b: const char *
  * Return: unsigned int.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, index, sum = 0, bin_int_v;
	char *bin, bin_char_v;

	if (b == NULL)
		return (0);

	bin = _strdup(b);
	if (bin == NULL)
		return (0);

	for (len = 0; *(bin + len) != '\0';)
		len++;

	index = 0;
	while (*(bin + index) != '\0')
	{
		bin_char_v = *(bin + index);
		bin_int_v = bin_check(bin_char_v);
		if (bin_int_v == (2))
			return (0);

		sum = sum + (bin_int_v * _pow(2, (len - (index + 1))));
		index++;
	}
	return (sum);
}

/**
  * _strdup - Uses malloc to create and copy a new string from an existing
  * string.
  * @s: const char *
  * Return: char *
  */

char *_strdup(const char *s)
{
	unsigned int len = 0, index;
	char *new_str;

	if (s == NULL)
		return (NULL);

	for (len = 0; *(s + len) != '\0';)
		len++;

	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);

	index = 0;
	while (*(s + index) != '\0')
	{
		*(new_str + index) = *(s + index);
		index++;
	}
	return (new_str);
}

/**
  * bin_check - Used to check if a char is a binary or not, then
  * converts it to an int.
  * @s: char
  * Return: int
  */

unsigned int bin_check(char s)
{
	if (s == '1')
		return (1);
	else if (s == '0')
		return (0);
	else
		return (2);
}

/**
  * _pow - Multiplies a number by it's self n times.
  * @x: unsigned int, the number.
  * @p: unsigned int, number of times.
  * Return: unsigned int.
  */

unsigned int _pow(unsigned int x, unsigned int p)
{
	unsigned int n = 1, i;

	if (x == 0)
		return (0);

	i = 0;
	while (i < p)
	{
		n *= x;
		i++;
	}
	return (n);
}
