#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - the function that adds a new node at the end of a list
  * @head: original linked list
  * @str: string to add to the node
  *
  * Return:  address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list1, *temp1;

	if (str != NULL)
	{
		new_list1 = malloc(sizeof(list_t));
		if (new_list1 == NULL)
			return (NULL);

		new_list1->str = strdup(str);
		new_list1->len = _strlen(str);
		new_list1->next = NULL;

		if (*head == NULL)
		{
			*head  = new_list1;
			return (*head);
		}
		else
		{
			temp1 = *head;
			while (temp1->next)
				temp1 = temp1->next;

			temp1->next = new_list1;
			return (temp1);
		}
	}

	return (NULL);
}

/**
  * _strlen - the function that returns the length of a string
  * @s: the string to be counted
  *
  * Return: length of the String
  */
int _strlen(const char *s)
{
	int a = 0;

	while (*s)
	{
		s++;
		a++;
	}

	return (a);
}
