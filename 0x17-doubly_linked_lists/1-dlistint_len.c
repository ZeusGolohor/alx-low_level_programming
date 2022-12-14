#include "lists.h"

/**
  * dlistint_len - Returns the numbers if elements in a list.
  * @h: dlistint_t.
  * Return: size_t.
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
