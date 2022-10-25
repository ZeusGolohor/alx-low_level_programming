#include "lists.h"

/**
  * listint_len - Used to return the len of a list.
  * @h: const listint_t *
  * Return: size_t
  */

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
