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
	dlistint_t *newnode, *temp = *h;
	unsigned int i = 0, x = 0, list_len = (_getlistlen(*h) - 1);

	if (idx > list_len)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (temp == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	while (temp != NULL)
	{
		if (i == idx)
			break;
		i++;
		temp = temp->next;
	}
	newnode->n = n;
	if (idx == x)
	{
		newnode->prev = NULL;
		*h = newnode;
	}
	else
		newnode->prev = temp->prev->next;
	newnode->next = temp;
	if (idx != x)
		temp->prev->next = newnode;
	temp->prev = newnode;
	return (newnode);

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
