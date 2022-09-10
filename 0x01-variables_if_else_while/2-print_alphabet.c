#include <stdio.h>
/**
 * main - Entry point
 * description - To print all alphabets,.
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
	putchar('\n');
	return (0);
}
