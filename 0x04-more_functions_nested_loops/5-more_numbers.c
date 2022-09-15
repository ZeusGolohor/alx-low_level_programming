#include "main.h"
/**
 * more_numbers - Numbers from
 * 0 to 14 * 10
 * Return: Always void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char n, c;

		for (n = 0; n <= 14; n++)
		{
			c = n;
			
			if (c > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
