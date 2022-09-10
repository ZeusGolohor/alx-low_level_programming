#include <stdio.h>
/**
 * main - Entry point
 * Description - all alphabet in
 * lowercase in reverse
 * Return: 0
*/
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
