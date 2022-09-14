#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - To print
 * all alphabets in lower case
 * return: always 0
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
