#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint -deletes the head node of a linked list,returns the head's data
  * @head: linked list head
  *
  * Return: a
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head1;
	int n = 0;

	if (*head != NULL)
	{
		new_head1 = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head1;
	}

	return (n);
}
