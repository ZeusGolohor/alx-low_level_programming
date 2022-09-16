#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - To print.
 * negative or positive number
 * @i: First operand
 * Return: Always an int.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is posive nor negative\n", i);
	else
		printf("%d is negative\n", i);
}
