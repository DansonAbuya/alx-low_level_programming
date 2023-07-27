#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len -The function that outputs the number of elements of a list
  * @h: the linked list
  *
  * Return: number of elements of the linked list
  */
size_t list_len(const list_t *h)
{
	size_t count_elements = 0;

	while (h)
	{
		h = h->next;
		count_elements++;
	}

	return (count_elements);
}
