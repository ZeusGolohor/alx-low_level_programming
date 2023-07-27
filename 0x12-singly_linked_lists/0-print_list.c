#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: a pointer to the first node.
 *
 * Return: int.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			i++;
		}
		h = h->next;
	}
	return (i);
}
