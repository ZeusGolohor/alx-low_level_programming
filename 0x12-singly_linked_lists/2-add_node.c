#include "lists.h"

/**
  * add_node - Adds a new node to a linked list.
  * @head: list_t **head.
  * @str: const char *str.
  * Return: list.
  */

list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *new;
	unsigned int len;

	new_str = strdup(str);
	if (new_str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (len = 0; *(new_str + len) != '\0';)
		len++;
	new->str = new_str;
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
