#include <stdio.h>
/**
 * functions  - entry point
 * return: always 0
*/

void print_alphabet(void)
{
	char alpha  = 'a';

	while(alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
