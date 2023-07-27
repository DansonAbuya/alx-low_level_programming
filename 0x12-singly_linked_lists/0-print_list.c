#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * print_list - the function that outputs all elements of a list
  * @h: name of the linked list
  *
  * Return: Number of elements in the linked list
  */
size_t print_list(const list_t *h)
{
	size_t count_elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->lenth, h->str);

		h = h->next_node;
		count_elements++;
	}

	return (count_elements);
}
