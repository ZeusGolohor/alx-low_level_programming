#include "lists.h"

/**
  * add_node_end - Used to add a node to the end of a singly linked list.
  * @head: list_t **head.
  * @str: const char *str.
  * Return: list_t *.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node, **temp = head;
	unsigned int len;

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = new_str;
	for (len = 0; new_str[len];)
		len++;
	new_node->len = len;
	if (*temp == NULL)
	{
		*temp = new_node;
		new_node->next = NULL;
	}
	else
	{
		while ((*temp)->next != NULL)
		{
			temp = &(*temp)->next;
		}
		(*temp)->next = new_node;
		new_node->next = NULL;
	}
	return (*head);
}
