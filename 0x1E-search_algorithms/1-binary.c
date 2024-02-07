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
	size_t m = 0, i = 0, p = 0;
	size_t l = 0, r = 0;

	if ((size == l) || (array == NULL))
		return (-1);
	r = (size - 1);
	printf("Searching in array: ");
	i = 0;
	while (i <= r)
	{
		printf("%d", array[i]);
		if ((i + 1) <= r)
			printf(", ");
		else
			printf("\n");
		i = i + 1;
	}
	while (l <= r)
	{
		m = l + (r - l)/2;
		if (array[m] == value)
			return (m);
		if (array[m] <= value)
		{
			l = m + 1;
			i = l;
			if (i <= r)
                        	printf("Searching in array: ");
			while (i <= r)
			{
				printf("%d", array[i]);
				if ((i + 1) <= r)
					printf(", ");
				else
					printf("\n");
				i = i + 1;
			}
		}
		else
		{
			r = m - 1;
			printf("Searching in array: ");
			i = l;
			while (i <= r)
			{
				printf("%d", array[i]);
				if ((i + 1) <= r)
					printf(", ");
				else
					printf("\n");
				i = i + 1;
			}
		}
	}
	return (-1);
}

