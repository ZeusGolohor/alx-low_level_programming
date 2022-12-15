#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at an index.
  * @h: address to first node.
  * @idx: new node position.
  * @n: data to be inserted into the new node.
  * Return: dlistint_t.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i = 0, list_len;

	if (idx < i || idx > _getlistlen(*h))
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	list_len = _getlistlen(*h);
	temp = *h;
	printf("list_len: %d, idx: %d, n: %d\n", list_len, idx, n);
	return (temp);

}

/**
  * _getlistlen - Used to get the length of a linked list.
  * @head: address to the first node.
  * Return: unsigned int.
  */
unsigned int _getlistlen(dlistint_t *head)
{
	unsigned i = 0;

	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}
