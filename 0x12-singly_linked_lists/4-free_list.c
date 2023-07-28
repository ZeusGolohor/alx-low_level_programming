#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: a pointer to the node.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}
