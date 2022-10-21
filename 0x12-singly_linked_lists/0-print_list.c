#include "lists.h"

/**
  * print_list - Used to print all the element of a list_t List.
  * @h: const list_t *h.
  * Return: size_t.
  */

size_t print_list(const list_t *h)
{
	size_t i;
	long int x;
	char *s;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			s = h->str;
			x = 0;
			while (s[x] != '\0')
				x++;
			printf("[%ld] %s\n", x, (s));
		}
		i++;
		h = h->next;
	}
	return (i);
}
