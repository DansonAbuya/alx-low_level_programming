#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a linked list.
  * @head:head of the linked list
  * @index: node index
  *
  * Return: 1 or -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *new = *head, *tempo;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	tempo = *head;
	while (tempo)
	{
		if (count == index)
		{
			new = tempo->next;
			tempo->next = new->next;
			free(new);
			return (1);
		}

		tempo = tempo->next;
		count++;
	}

	return (-1);
}
