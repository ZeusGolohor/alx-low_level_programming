#include "lists.h"

/**
  * sum_listint - Used to sum up a particular value from a singly linked list
  * @head: listint_t *
  * Return: int
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
