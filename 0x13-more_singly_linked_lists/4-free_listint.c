#include "lists.h"

/**
  * free_listint - Used to free up memory used by a linked list.
  * @head: listint_t *
  * Return: void.
  */

void free_listint(listint_t *head)
{
	listint_t *temp = head, *current;

	if (temp == NULL)
		free(temp);
	else
	{
		while (temp->next != NULL)
		{
			current = temp;
			temp = temp->next;
			free(current);
		}
		if (temp->next == NULL)
		{
			current = temp;
			temp = temp->next;
			free(current);
			free(temp);
		}
	}
}
