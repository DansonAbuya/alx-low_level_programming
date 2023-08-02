#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - A func that adds new node to the end of a linked list
  * @head: the linked list head
  * @n: The value to be  added at the end of the linked list
  *
  * Return: address of the new element, or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list1, *tempo;

	if (head)
	{
		new_list1 = malloc(sizeof(listint_t));
		if (new_list1 == NULL)
			return (NULL);

		new_list1->n = n;
		new_list1->next = NULL;

		if (*head == NULL)
		{
			*head = new_list1;
			return (*head);
		}
		else
		{
			tempo = *head;
			while (tempo->next)
				tempo = tempo->next;

			tempo->next = new_list1;
			return (tempo);
		}
	}

	return (NULL);
}
