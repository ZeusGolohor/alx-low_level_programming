#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - to find a prime
 * number
 * @n: first operand.
 * Return: Always an int.
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
  * prime - to find a prime
  * number
  * @n: first operand.
  * @i: second operand.
  * Return: Always an int.
  */

int prime(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	return (prime(n, (i + 1)));
}
