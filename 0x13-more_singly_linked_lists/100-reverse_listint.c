#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: a pointer to a pointer to the first node.
 *
 * Return: listint_t *.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = *head;
	_while(head, temp);
	return (*head);
}

/**
 * _while - A function used to loop through the list.
 * @head: a pointer to a pointer to the first node.
 * @temp: a temporary variable used to store values.
 *
 * Return: void.
 */
void _while(listint_t **head, listint_t *temp)
{
	listint_t *next, *prev = NULL;

	while (temp != NULL)
	{
		if (temp  == *head)
		{
			prev = temp;
			*head = temp;
			next = temp->next;
			temp->next = NULL;
			prev = temp;
		}
		else
		{
			next = temp->next;
			temp->next = prev;
			prev = temp;
		}
		*head = temp;
		temp = next;
	}
}
