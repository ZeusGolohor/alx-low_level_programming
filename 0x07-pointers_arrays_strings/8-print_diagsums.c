#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two
 * diagonals
 * @a: first operand.
 * @size: second operand.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int i, x;

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			printf("a[%d][%d] = %d\n", i, x, a[size - i - 1]);
		}
	}
}
