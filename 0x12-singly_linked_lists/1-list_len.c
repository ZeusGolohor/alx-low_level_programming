#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked
 * list_t list.
 * @h: a pointer to the first node.
 *
 * Return: size_t.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
