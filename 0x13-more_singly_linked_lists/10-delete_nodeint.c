#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * index index of a listint_t linked list.
 * @head: a pointer to a pointer to the head node.
 * @index: the index of the node to be deleted.
 *
 * Return: int.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *free_mem;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (temp->next != NULL)
		{
		free_mem = temp;
		*head = temp->next;
		free(free_mem);
		return (1);
		}
		else if (temp->next == NULL)
		{
			*head = NULL;
			free(temp);
			return (1);
		}
	}
	else
	{
		i = i + 1;
		while (temp != NULL)
		{
			if (index == i)
			{
				free_mem = temp->next;
				if (temp->next != NULL)
					temp->next = temp->next->next;
				free(free_mem);
			}
			i = i + 1;
			temp = temp->next;
		}
	}
	return (-1);
}
