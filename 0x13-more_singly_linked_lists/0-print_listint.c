#include "lists.h"

/**
 * print_listint - A  function that prints all the elements of a listint_t list
 * @h: a pointer to the first node of the list.
 *
 * Return: size_t.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);
	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		n = n + 1;
	}
	return (n);
}
