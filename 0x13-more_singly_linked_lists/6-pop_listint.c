#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head:  a pointer to a pointer to the first node.
 *
 * Return: int.
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp = *head;

	if (temp == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
