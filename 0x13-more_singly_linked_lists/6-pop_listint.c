#include "lists.h"

/**
  * pop_listint - used to delete the head nide and return the
  * node's n data.
  * @head: listint_t **
  * Return: int
  */

int pop_listint(listint_t **head)
{
	listint_t *current, **temp = head;
	int i = 0;

	if (head == NULL)
	{
		current = *head;
		free(current);
		return (i);
	}
	else
	{
		current = *head;
		i = (*head)->n;
		temp = &(*head)->next;
		*head = *temp;
		free(current);
		return (i);
	}
}
