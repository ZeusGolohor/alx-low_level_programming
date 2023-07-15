#include <stdio.h>
#include "main.h"

int main(int ac, char *av[])
{
	int i;
	size_t total = 0;
	unsigned int temp_size = 0, x;

	if (ac != 3)
	{
		printf("Error\n");
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
				printf("Error: %c\n", av[i][x]);
				exit(98);
			}
		}
	}
	total = (*av[1] - '0') * (*av[2] - '0');
	printf("%ld\n", total);
	return (0);
}

/*
void _print(char *str)
{
	unsigned int len, i;

	len = get_size(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
}
*/
