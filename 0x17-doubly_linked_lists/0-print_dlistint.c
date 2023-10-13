#include "lists.h"

/**
  * print_dlistint - A function that prints all the elements of a list.
  * @h: dlistint_h *
  * Return: size_t
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
