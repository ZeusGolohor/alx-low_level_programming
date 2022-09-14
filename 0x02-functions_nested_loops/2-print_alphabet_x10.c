#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - To print all
 * alphabets x10
 * Return: Always void
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		putchar('\n');
		i++;
	}
}
