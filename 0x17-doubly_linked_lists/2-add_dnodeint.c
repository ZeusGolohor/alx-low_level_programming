#include "lists.h"

/**
  * add_dnodeint - Used to add a new node at the beginnig of a list.
  * @head: address to the first node.
  * @n: new data for new node.
  * Return: dlistint_t.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}
	return (*head);
}
