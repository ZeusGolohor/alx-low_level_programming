#include "lists.h"

/**
  * get_dnodeint_at_index - Get a node via its index.
  * @head: Address to tge first node.
  * @index: index of the node to locate.
  * Return: dlistint_t.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (index < i)
		return (NULL);
	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
