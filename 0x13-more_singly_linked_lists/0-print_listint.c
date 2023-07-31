#include <stdio.h>
#include "lists.h"

/**
  * print_listint - the function that outputs all the elements of a linked list
  * @h: the linked list head
  *
  * Return: the linked list nodes number
  */
size_t print_listint(const listint_t *h)
{
	int count_elements = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count_elements++;
		}
	}

	return (count_elements);
}
