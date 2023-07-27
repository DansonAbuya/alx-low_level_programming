#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - the function that adds the new node at the beginning of a list
  * @head: original linked list
  * @str: string to add to the node
  *
  * Return: address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp1;

	if (head != NULL && str != NULL)
	{
		temp1 = malloc(sizeof(list_t));
		if (temp1 == NULL)
			return (NULL);

		temp1->str = strdup(str);
		temp1->len = _strlen(str);
		temp1->next = *head;

		*head = temp1;

		return (temp1);
	}

	return (0);
}

/**
  * _strlen - the function that returns the length of a string
  * @s: the string to be counted
  *
  * Return: the string length
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
