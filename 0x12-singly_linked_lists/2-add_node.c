#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of a list_t
 * list.
 * @head: a pointer to a pointer to the first node.
 * @str: string to be stored the new node.
 *
 * Return: list_t *.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
	char *_str;

	_str = strdup(str);
	new_node = malloc(sizeof(list_t));
	if ((_str == NULL) || (new_node == NULL))
		return (NULL);
	len = _get_len(_str);
	new_node->str = _str;
	new_node->len = len;
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = &(**head);
	*head = new_node;
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
