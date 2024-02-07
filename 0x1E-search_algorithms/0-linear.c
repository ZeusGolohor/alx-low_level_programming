#include "search_algos.h"

/**
 * linear_search - searches through every element in an
 * array.
 * @array: array to be linearly checked.
 * @size: size of @array.
 * @value: value to search for in the array.
 *
 * Return: int.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", size, array[i]);
		if (array[i] == value)
			return (i);
		i = i + 1;
	}
	return (-1);
}
