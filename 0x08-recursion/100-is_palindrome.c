#include "main.h"

/**
 *  is_palindrome - A function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: The string to be checked.
 * Return: int.
 */
int is_palindrome(char *s)
{
	int len = 0, *y, **x;
	int a = 2, *b, **r;
	char *s2 = s;

	y = &len;
	x = &y;
	b = &a;
	r = &b;
	len = get_s_l(s, x);
	is_pa(s, s2, x, r);
	return (a);
}

/**
 * char_cmp - A function to compare two characters.
 * @x: first character.
 * @y: second character.
 * Return: int.
 */
int char_cmp(char x, char y)
{
	/**printf("\n%c == %c", x ,y);*/
	if (x == y)
		return (0);
	else
		return (-1);
}

/**
 * is_pa - A function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s: The string from the right.
 * @s2: The string from the left.
 * @len: An int pointer to a poinetr used to select characters from @s2.
 * @r: An int pointer to a pointer used to store the final result.
 * Return: int.
 */
int is_pa(char *s, char *s2, int **len, int **r)
{
	if (*s == '\0')
	{
		**r = 1;
		return (**r);
	}
	**len = **len - 1;
	if (char_cmp(*(s + 0), *(s + **len)) == 0)
	{
		**r = 1;
		**len = **len - 1;
		is_pa((s + 1), s2, len, r);
	}
	else
	{
		**r = 0;
		return (**r);
	}
	return (**r);
}

/**
 * get_s_l - A function used to get the string length.
 * @s: The string.
 * @len: A pointer used to store the final result.
 * Return: void.
 */
int get_s_l(char *s, int **len)
{
	if (*s == '\0')
		return (**len);
	**len = **len + 1;
	get_s_l((s + 1), len);
	return (**len);
}
