#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - a function that inserts a new node at a position
  * @head: linked list head
  * @idx: ...
  * @a: ...
  *
  * Return:new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int a)
{
	listint_t *new_node, *iter;
	unsigned int count = 1;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->a = a;
		if (idx > 0)
		{
			iter = *head;
			while (iter)
			{
				if (count == idx)
				{
					new_node->next = iter->next;
					iter->next = new_node;
					return (new_node);
				}
				iter = iter->next;
				count++;
			}
			if (idx > count)
				return (NULL);
		}
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
