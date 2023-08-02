#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *free_mem;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		printf("%d: ", 0);
		free_mem = temp;
		temp = temp->next;
		free(free_mem);
		return (1);
	}
	else
	{
		while (temp != NULL)
		{
			if ((index + 1) == i)
			{
				printf("%d: ", i);
				return (1);
			}
			i++;
			temp = temp->next;
		}
	}
	return (-1);
}
