#include "main.h"
#include <stdlib.h>

/**
  * array_range - create an array of integers
  * @min: first operand.
  * @max: second operand.
  * Return: int *
  */

int *array_range(int min, int max)
{
	int i = 0;
	int *array = malloc(sizeof(int) * max);

	if (array == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	while (min < max)
	{
		*(array + i) = min++;
		i++;
	}
	return (array);
}
