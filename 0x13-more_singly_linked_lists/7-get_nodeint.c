#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index -a function that returns the nth node of a linked list
  * @head: linked list head
  * @index: node index
  *
  * Return: Nothing
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count_elements = 0;

	if (head)
	{
		while (head)
		{
			if (count_elements == index)
				return (head);

			head = head->next;
			count_elements++;
		}
	}

	return (NULL);
}
