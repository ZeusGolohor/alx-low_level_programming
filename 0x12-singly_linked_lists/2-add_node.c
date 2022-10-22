#include "lists.h"

/**
  * add_node - Adds a new node to a linked list.
  * @head: list_t **head.
  * @str: const char *str.
  * Return: list.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;
	char *new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new->next == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; *(new_str + 1) == '\0';)
		len++;
	new->str = new_str;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
