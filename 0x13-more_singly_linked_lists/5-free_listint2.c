#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - a function that frees a listint_t list
  * @head: linked list head
  *
  * Return: Nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head)
	{
		while (*head)
		{
			tempo = (*head);
			*head = (*head)->next;
			free(tempo);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
