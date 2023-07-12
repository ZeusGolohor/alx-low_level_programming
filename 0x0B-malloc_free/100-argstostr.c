#include "main.h"

/**
 * argstostr - A function that concatenates all the arguments of your program.
 * @ac: total numbers of args passed to the function.
 * @av: all args passed to the function.
 *
 * Return: char*.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	unsigned int av_size = 0, a = 0, y, z;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		av_size = av_size + get_size(av[i]);
	}
	str = malloc((sizeof(char) * av_size) + ac + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		y = get_size(av[i]);
		for (z = 0; z < y; z++)
		{
			str[a] = av[i][z];
			++a;
		}
		str[a] = '\n';
		++a;
	}
	str[a] = '\0';
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
