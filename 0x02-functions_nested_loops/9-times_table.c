#include "main.h"
/**
 * times_table - 9 times table.
 * Return: Always 0
 */
void times_table(void)
{
	/** varable declarations */	
	int a = 0;
	int b, rep;
	
	/* while loop to make
	 * sure it is a 9 times 
	 * table 
	 */
	while (a <= 9)
	{
		/** variable declaration */
		b = 0;
		/** while loop to
		 *  set up the columns
		*/
		while (b <= 9)
		{
			rep = a * b;
			if (b == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar('0' + rep);
			}
			else
			{
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
