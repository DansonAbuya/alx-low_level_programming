#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
  * insert_nodeint_at_index - ...
  * @head: ...
  * @idx: ...
  * @n: ...
  *
  * Return: ...
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node1, *iter;
	unsigned int count_elements = 1;

	if (head)
	{
		new_node1 = malloc(sizeof(listint_t));
		if (new_node1 == NULL)
			return (NULL);

		new_node1->n = n;
		if (idx > 0)
		{
			iter = *head;
			while (iter)
			{
				if (count_elements == idx)
				{
					new_node1->next = iter->next;
					iter->next = new_node1;
					return (new_node1);
				}
				iter = iter->next;
				count_elements++;
			}
			if (idx > count_elements)
				return (NULL);
		}
		else
		{
			new_node1->next = *head;
			*head = new_node1;
		}
		return (new_node1);
	}
	return (NULL);
}
