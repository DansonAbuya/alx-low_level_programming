#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - a function that frees a linked list
  * @head: the linked list head
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}

	free(head);
}
