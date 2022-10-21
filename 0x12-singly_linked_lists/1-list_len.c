#include "lists.h"

/**
  * list_len - Used to get the list of a linked list.
  * @h: first operand.
  * Return: size_t.
  */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
