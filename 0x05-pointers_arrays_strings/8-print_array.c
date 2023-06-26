#include <stdio.h>
#include "main.h"

/**
  * print_array - Outputs  n elements of an array of integers
  * @a: array
  * @n: Array elements' number to be printed
  *
  * *
  * Return: void
  */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
