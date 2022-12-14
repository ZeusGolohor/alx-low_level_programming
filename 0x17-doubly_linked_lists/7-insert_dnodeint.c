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
	dlistint_t *newnode, *temp = *h;
	unsigned int i = 0, x = 0, list_len = _getlistlen(*h);

	if (idx > list_len)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (temp == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	while (temp != NULL)
	{
		if (i == idx || i == (list_len - 1))
			break;
		i++;
		temp = temp->next;
	}
	/**
	  * newnode insertion
	  */
	node_shift(idx, list_len, newnode, temp, h, x);
	return (newnode);
}

/**
  * _getlistlen - Used to get the length of a linked list.
  * @head: address to the first node.
  * Return: unsigned int.
  */
unsigned int _getlistlen(dlistint_t *head)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}

/**
  * node_shift - Used to add new node to a specific position
  * in a Dlinked list.
  * @idx: unsigned int.
  * @list_len: unsigned int.
  * @newnode: dlistint_t.
  * @temp: dlistint_t.
  * @h: dlistint_t.
  * @x: unsigned int.
  * Return: void.
  */
void node_shift(unsigned int idx, unsigned int list_len, dlistint_t *newnode,
dlistint_t *temp, dlistint_t **h, unsigned int x)
{
	/**
	  * inserting at the end
	  */
	if (idx == list_len)
	{
		newnode->next = NULL;
		newnode->prev = temp;
		temp->next = newnode;
	}
	/**
	  * inserting at the beggining
	  */
	else if (idx == x)
	{
		newnode->prev = NULL;
		newnode->next = temp;
		temp->prev = newnode;
		*h = newnode;
	}
	/**
	  * inserting at the middle
	  */
	else
	{
		newnode->next = temp;
		newnode->prev = temp->prev;
		temp->prev->next = newnode;
		temp->prev = newnode;
	}
}
