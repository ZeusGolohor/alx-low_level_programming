#include "lists.h"

/**
 * get_nodeint_at_index - A  function that returns the nth node
 * of a listint_t linked list.
 * @head: a pointer to the first node.
 * @index: index of the node to be returned.
 * Return: listint_t *.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		i = i + 1;
		temp = temp->next;
	}
	return (NULL);
}
