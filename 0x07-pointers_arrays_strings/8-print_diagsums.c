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
	int main_size = (size * size), i, count = 0, check = 0;
	int count2 = 0, check2 = (size - 1);

	for (i = 0; i < main_size; i++)
	{
		printf("%d, ", *(a + i));
		if (i == 0)
		{
			count = count + *(a + i);
			/**printf("<-yes");*/
			check = size + 1;
		}
		else
		{
			if (i == check)
			{
/**				printf("<-yes");*/
				count = count + *(a + i);
				check = check + check;
			}
		}
		if (i == check2)
		{
			printf("<-*2*%d ", i);
			if (i == (size - 1))
				count2 = 0 + *(a + i);
			else
				count2 = count2 + *(a + i);
			check2 = check2 + check2;
		}
	}

	printf("\n%d, %d\n", count, count2);
}
