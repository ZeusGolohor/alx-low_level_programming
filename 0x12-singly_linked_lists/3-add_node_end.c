#include "lists.h"

/**
  * add_node_end - Used to add a node to the end of a singly linked list.
  * @head: list_t **head.
  * @str: const char *str.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *new;
	unsigned int len;

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (len = 0; *(new_str + len) != '\0';)
		len++;
	new->str = new_str;
	new->len = len;
	if (head == NULL)
	{
		printf("Head is null\n");
		new->next = *head;
		*head = new;
	}
	else
	{
		printf("head is not null\n");
	}
	return (*head);
}
