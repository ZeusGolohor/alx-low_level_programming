#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list_t list.
 * @head: a pointer to a pointer to the first node.
 * @str: string to be added to the first node.
 *
 * Return: list_t *.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;
	unsigned int len = 0;
	char *_str;

	if (str == NULL)
		return (NULL);
	_str = strdup(str);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	len = _get_len(_str);
	new_node->str = _str;
	new_node->len = len;
	new_node->next = NULL;
	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (*head);
}

/**
 * _get_len - A function used to get the length of a string.
 * @str: string length to be gotten.
 *
 * Return: unsigned int.
 */
unsigned int _get_len(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (i);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
