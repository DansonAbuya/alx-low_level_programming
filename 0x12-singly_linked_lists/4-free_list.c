#include <stdlib.h>
#include "lists.h"

/**
  * free_list - the function that frees a linked list.
  * @head: points to the first node of the linked list
  *
  * Return: freed head
  */
void free_list(list_t *head)
{
	list_t *temp1;

	while (head)
	{
		temp1 = head;
		head = head->next;
		free(temp1->str);
		free(temp1);
	}

	free(head);
}
