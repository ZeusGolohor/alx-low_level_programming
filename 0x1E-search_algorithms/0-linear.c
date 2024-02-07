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

	if ((size == i) || (array == NULL))
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i = i + 1;
	}
	return (-1);
}
