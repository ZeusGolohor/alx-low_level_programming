#include "lists.h"

/**
  * print_listint - Used to print the length of a list.
  * @h: const listint_t *
  * Return: size_t.
  */

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
