#include "lists.h"

/**
 * add_nodeint - A  function that adds a new node at the beginning of a
 * listint_t list.
 * @head: a pointer to a pointer to the first node.
 * @n: integer to be added to the first node.
 *
 * Return: listint_t.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (temp == NULL)
		newnode->next = NULL;
	else
		newnode->next = temp;
	*head = newnode;
	return (*head);
}
