#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Used to reserve values
 * in an array
 * @a: first operand.
 * @n: second operand.
 * Return: Always viod.
 */

void reverse_array(int *a, int n)
{
	int i;
	
	if (n == 0)
	{
		printf("%d", *(a + n));
	}
	else
	{
		for (i = n; i >= 0; i--)
		{
			printf("%d", *(a + i));
			if (*(a + i) != '\0')
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
