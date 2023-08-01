#include "lists.h"

/**
 * sum_listint - A  function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: a pointer to the first node.
 *
 * Return: int.
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (i);
	while (temp != NULL)
	{
		i = i + temp->n;
		temp = temp->next;
	}
	return (i);
}
