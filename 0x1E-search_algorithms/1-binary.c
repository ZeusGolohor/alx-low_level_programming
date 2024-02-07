#include "search_algos.h"

/**
 * binary_search - searches through every element in an
 * array.
 * @array: array to be linearly checked.
 * @size: size of @array.
 * @value: value to search for in the array.
 *
 * Return: int.
 */
int binary_search(int *array, size_t size, int value)
{
	int m = 0;
	size_t l = 0, r = (size - 1);

	while (l > r)
	{
		m = l + (r - l)/2;

		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		if (array[m] > value)
			r = m - 1;
	}
	return (-1);
}

