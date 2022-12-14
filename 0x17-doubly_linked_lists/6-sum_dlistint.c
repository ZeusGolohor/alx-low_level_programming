#include "lists.h"

/**
  * sum_dlistint - Used to sum up the n data in the linked list.
  * @head: address to the first node.
  * Return: int.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
