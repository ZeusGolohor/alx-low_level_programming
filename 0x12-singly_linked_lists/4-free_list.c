#include "lists.h"

/**
  * free_list - Used to free memory used up by a singly linked list.
  * @head: list_t *
  * Return: void.
  */

void free_list(list_t *head)
{
	list_t *temp = head, *current;

	while (temp->next != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current->str);
		free(current);
	}
	if (temp->next == NULL)
	{
		current = temp;
		temp = temp->next;
		free(current->str);
		free(current);
		free(temp);
	}
}
