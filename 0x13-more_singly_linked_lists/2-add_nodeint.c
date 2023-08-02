#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint -The fun that adds a new node at the beginning of a linked list
  * @head: the linked list head
  * @n: The value to be added to the new node
  *
  * Return: address of the new element, or NULL it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list1;

	if (head != NULL)
	{
		new_list1 = malloc(sizeof(listint_t));
		if (new_list1 == NULL)
			return (NULL);

		new_list1->n = n;
		new_list1->next = *head;
		*head = new_list1;
		return (new_list1);
	}

	return (NULL);
}
