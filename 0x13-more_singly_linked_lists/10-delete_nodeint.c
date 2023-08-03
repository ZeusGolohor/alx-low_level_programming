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
		_index_0_check(head);
		return (1);
	}
	else if (temp->next->next == NULL)
	{
		free_mem = temp->next;
		temp->next = NULL;
		free(free_mem);
		return (1);
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

/**
 * _index_0_check - A function to check and modify the index node.
 * @head: a pointer to a pointer to the head node.
 *
 * Return: void.
 */
void _index_0_check(listint_t **head)
{
	listint_t *temp, *free_mem;

	temp = *head;
	if (temp->next != NULL)
	{
		free_mem = temp;
		*head = temp->next;
		free(free_mem);
	}
	else if (temp->next == NULL)
	{
		*head = NULL;
		free(temp);
	}
}
