#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at an index.
  * @h: address to first node.
  * @idx: new node position.
  * @n: data to be inserted into the new node.
  * Return: dlistint_t.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i = 0;

	if (idx < i)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == i)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		*h = newnode;
	}
	else
	{
		i = 0;
		temp = *h;
		while (temp != NULL)
		{
			if (i > idx)
				return (NULL);
			if (i == idx)
				break;
			i++;
			temp = temp->next;
		}
		newnode->n = n;
		newnode->next = temp;
		newnode->prev = temp->prev;
		temp->prev->next = newnode;
		temp->prev = newnode;
	}
	return (newnode);
}
