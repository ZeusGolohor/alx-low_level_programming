#include <stdio.h>
#include "main.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(2048 + 1024, 3);
	printf("%u\n", n);
	return (0);
}
