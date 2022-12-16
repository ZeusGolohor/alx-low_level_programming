#include "lists.h"

/**
  * delete_dnodeint_at_index - Used to delete a node from a Dlinked list.
  * @head: Address to first node.
  * @index: unsigned int.
  * Return: int.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int list_len = _getlistlen(*head), i;
	dlistint_t *temp, *next_buffer, *prev_buffer;

	if ((*head) == NULL || index > list_len)
		return (-1);
	if (index == 0 && (list_len > 1))
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
	}
	else if (list_len == 1)
	{
		temp = *head;
		*head = NULL;
	}
	else
	{
		i = 0;
		temp = *head;
		while (temp != NULL)
		{
			if (i == index)
				break;
			i++;
			temp = temp->next;
		}
		if (index == (list_len - 1))
			temp->prev->next = NULL;
		else
		{
			next_buffer = temp->next;
			prev_buffer = temp->prev;
			temp->next->prev = prev_buffer;
			temp->prev->next = next_buffer;
		}
	}
	free(temp);
	return (1);
}

/**
  * _getlistlen - Used to get the length of a linked list.
  * @head: address to the first node.
  * Return: unsigned int.
  */
unsigned int _getlistlen(dlistint_t *head)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}
