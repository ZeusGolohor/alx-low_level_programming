#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: a pointer to the first node.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *free_mem;

/**	if (temp != NULL)
	{
	while (temp != NULL)
	{
		free_mem = temp;
		temp = temp->next;
		free(free_mem);
	}
	free(temp);
	*head = NULL;
	}
	else
		*head = NULL;
		*/
	if (*head != NULL)
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
		*head = NULL;
	}
	else
	{
		*head = NULL;
	}
}
