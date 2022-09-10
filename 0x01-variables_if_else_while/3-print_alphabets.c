#include <stdio.h>
/**
 * main - Entry point
 * Description - To print alphabets
 * in upper and lower case
 * Return: 0
*/
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	alpha = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
