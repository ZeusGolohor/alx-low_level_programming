#include "lists.h"

/**
 * listint_len - A  function that returns the number of elements
 * in a linked listint_t list.
 * @h: a pointer to the first node of the list.
 *
 * Return: size_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);
	for (; h != NULL; h = h->next)
		n = n + 1;
	return (n);
}
