#include "main.h"
#include <stdio.h>

void _print(char *);

/**
 * main - A  program that multiplies two positive numbers.
 * @ac: number of arguments passed to the program.
 * @av: arguements passed tot the program.
 *
 * Return: int.
 */
int main(int ac, char *av[])
{
	int i;
	size_t total = 0;
	unsigned int temp_size = 0, x;

	if (ac != 3)
	{
		_print("Error\n");
		exit(98);
	}
	for (i = 1; i < ac; i++)
	{
		temp_size = get_size(av[i]);
		for (x = 0; x < temp_size; x++)
		{
			if ((av[i][x] >= '0') && (av[i][x] <= '9'))
			{}
			else
			{
				_print("Error\n");
				exit(98);
			}
		}
	}
	total = atoll(av[1]) * atoll(av[2]);
	printf("%ld\n", total);
	return (0);
}

/**
 * _print - A funtion to print strings.
 * @str: the tring to be printed.
 * 
 * Return: void.
 */
void _print(char *str)
{
	unsigned int len, i;

	len = get_size(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * get_size - Used to get the size of a string.
 * @str: the string size to be gotten.
 *
 * Return: unsigned int.
 */
unsigned int get_size(char *str)
{
	size_t i, count = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		count = count + 1;
	return (count);
}

