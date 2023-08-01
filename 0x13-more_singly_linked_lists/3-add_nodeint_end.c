#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of a listint_t
 * list.
 * @head: a pointer to a pointer to the first node.
 * @n: integer to be add to the new node.
 * Return: listint_t.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (temp == NULL)
		*head = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (*head);
}
