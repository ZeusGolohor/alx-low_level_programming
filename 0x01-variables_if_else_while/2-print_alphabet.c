#include <stdio.h>
/* 
 *main - Entry point
 * description - Write a program that prints the alphabet in lowercase, followed by a new line.
 * return (0)
 * */
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
