#include "lists.h"
/**
 * insert_nodeint_at_index - A function that inserts a new node at a given
 * position.
 * @head: a pointer to the pointer to the first node.
 * @idx: index of the node to be inserted.
 * @n: value to be aded to the new node.
 *
 * Return: listint_t *.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (temp->next != NULL)
		{
			if (idx == i)
			{
				newnode->next = temp->next;
				temp->next = newnode;
				return (newnode);
			}
			i = i + 1;
			temp = temp->next;
		}
		if (idx == i)
		{
			newnode->next = NULL;
			temp->next = newnode;
			return (newnode);
		}
		else
			free(newnode);
		return (NULL);
	}
}
