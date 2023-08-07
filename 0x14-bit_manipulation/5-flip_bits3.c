#include "main.h"
/**
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total = 0;
	long int i = 0, size = 0, x = 0;
	unsigned int flips = 0, *fliped_indexes_n, *fliped_indexes_m, y = 0;

	y = (n > m)? n: m;
	while (total < y)
	{
		total = total + _pow_lint(2, i);
		++i;
	}
	--i;
	printf("%ld\n", total);
	size = i;
	fliped_indexes_n =  malloc(sizeof(int) * size);
	fliped_indexes_m =  malloc(sizeof(int) * size);
	if ((fliped_indexes_n == NULL) || (fliped_indexes_m == NULL))
		return (0);
	fliped_indexes_n[size] = -2;
	total = 0;
	while (i >= 0)
	{
		if ((total + _pow_lint(2, i)) <= n)
		{
			total = total + _pow_lint(2, i);
			fliped_indexes_n[(size - i)] = i;
		}
		--i;
	}
	for (x = 0; x <= size; x++)
		printf("%d, ", fliped_indexes_n[x]);
	printf("\n");
	total = 0;
	i = 0;
	while (total < m)
	{
		total = total + _pow_lint(2, i);
		++i;
	}
	--i;
	total = 0;
	while (i >= 0)
	{
		if ((total + _pow_lint(2, i) <= m))
		{
			total = total + _pow_lint(2, i);
			fliped_indexes_m[(size - i)] = i;
		}
		--i;
	}
	printf("\n%ld\n", total);
	for (x = 0; x <= size; x++)
		printf("%d, ", fliped_indexes_m[x]);
	for (x = 0; x <= size; x++)
	{
		if (fliped_indexes_n[x] != fliped_indexes_m[x])
			flips = flips + 1;
	}
	printf("\n");
	free(fliped_indexes_n);
	free(fliped_indexes_m);
	return (flips);
}
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m) {
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0, i = 0;
	unsigned long int total = 0;
	
	while (total < xor_result)
	{
		printf("%d\n", i);
		total = total + _pow_lint(2, i);
		++i;
	}
	--i;
	printf("%ld\n", xor_result);
	printf("%ld\n", total);
	printf("%d\n", i);
	total = 0;
	while (i > 0)
	{
		if (total <= xor_result)
		{
			total = total + _pow_lint(2, i);
			count = count + 1;
		}
		--i;
	}
	printf("%ld\n", total);
	return count;
}




/**
 * _pow_lint - A function to get the result of a number raised to the power of
 * another number.
 * @number: the number to be multiplied by @power times.
 * @power: the number of times to multiply a number by itself.
 *
 * Return: unsigned long int.
 */
unsigned long int _pow_lint(unsigned long int number, long int power)
{
	unsigned long int pow = 1;

	while (power > 0)
	{
		pow = number * pow;
		--power;
	}
	return (pow);
}
