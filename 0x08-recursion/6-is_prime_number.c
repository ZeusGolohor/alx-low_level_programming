#include "main.h"

/**
 * is_prime_number - A function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: value.
 * Return: void.
 */
int is_prime_number(int n)
{
	int i = 2, **x, *y, z = 0;

	y = &z;
	x = &y;
	if (n <= 1)
		return (0);
	if (n == i)
		return (1);
	return (is_p(n, i, x));
}

/**
 * is_p - A function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: value.
 * @i: value used for iteration.
 * @x: prointer to a pointer used to store results.
 * Return: void.
 */
int is_p(int n, int i, int **x)
{
	if (i > n)
	{
		return (0);
	}
	if ((n % i) != 0)
		is_p(n, (i + 1), x);
	if (((n % i) == 0) && (n == i))
	{
		**x = 1;
		return (1);
	}
	return (**x);
}
