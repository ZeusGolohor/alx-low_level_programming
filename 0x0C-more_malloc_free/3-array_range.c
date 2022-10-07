#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * array_range - create an array of integers
  * @min: first operand.
  * @max: second operand.
  * Return: int *
  */

int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		*(array + i) = min++;
		i++;
	}
	return (array);
}
