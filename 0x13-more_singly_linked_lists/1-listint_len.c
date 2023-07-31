#include <stdio.h>
#include "lists.h"

/**
  * listint_len - the function that counts the elements in a linked list
  * @h: the linked list head
  *
  * Return: A linked list elements number
  */
size_t listint_len(const listint_t *h)
{
	int count_elements = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count_elements++;
		}
	}

	return (count_elements);
}
