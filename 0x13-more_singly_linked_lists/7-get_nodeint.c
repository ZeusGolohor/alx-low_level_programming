#include "lists.h"

/**
  * get_nodeint_at_index - Used to traverse a singly linked list to locate a
  * node using an index.
  * @head: listint_t
  * @index: unsigned int
  * Return: listint_t *
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
