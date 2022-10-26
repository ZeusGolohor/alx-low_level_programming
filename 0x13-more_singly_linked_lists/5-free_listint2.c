#include "lists.h"

/**
  * free_listint2 - Used to free the memory used up by singly list
  * and then set head to NULL.
  * @head: listint_t **
  * Return: void.
  */

void free_listint2(listint_t **head)
{
	listint_t *current = *head, *next;

	if (head != NULL)
	{
		while (current->next != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		if (current->next == NULL)
		{
			next = current->next;
			free(current);
			free(next);
		}
	}
	*head = NULL;
}
