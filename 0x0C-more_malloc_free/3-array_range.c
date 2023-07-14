#include "main.h"

/**
 * array_range - A function that creates an array of integers.
 * @min: minimum number used to initialize array.
 * @max: maximum number used to initialize array.
 *
 * Return: int *.
 */
int *array_range(int min, int max)
{
	int *temp;
	int i, total, x = min;

	if (min > max)
		return (NULL);
	total = (max - min);
	total = total + 1;
	temp = malloc(sizeof(int) * total);
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
	{
		temp[i] = x;
		++x;
	}
	return (temp);
}
