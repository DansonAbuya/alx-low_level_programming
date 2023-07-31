#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint -function that returns  sum of all the data in a linked list
  * @head: linked list head
  *
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->a;
			head = head->next;
		}
	}

	return (sum);
}
