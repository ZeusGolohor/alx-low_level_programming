#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: a pointer to the first node.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head, *free_mem;

	while (temp != NULL)
	{
		free_mem = temp;
		temp = temp->next;
		free(free_mem);
	}
}
