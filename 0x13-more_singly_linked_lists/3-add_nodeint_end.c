#include "lists.h"

/**
  * add_nodeint_end - Used to add a new node to the end of a list.
  * @head: listint_t **
  * @n: const int
  * Return: listint_t
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t **temp = head, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*temp == NULL)
	{
		*temp = new_node;
	}
	else
	{
		while ((*temp)->next != NULL)
			temp = &(*temp)->next;
		if ((*temp)->next == NULL)
			(*temp)->next = new_node;
	}
	return (*head);
}
