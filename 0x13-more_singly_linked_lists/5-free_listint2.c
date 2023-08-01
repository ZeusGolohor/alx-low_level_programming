#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: a pointer to the first node.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *free_mem;
	
	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			free_mem = temp;
			temp = temp->next;
			free(free_mem);
		}
		free(temp);
		*head = NULL;
	}
}
