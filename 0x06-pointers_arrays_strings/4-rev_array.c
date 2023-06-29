#include "main.h"
#include <stdio.h>

/**
  * reverse_array -results in the reverse of an array of integers
  * @a: An array of integers
  * @n: No of elements to be reversed
  *
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int *b, i, swaper, k;

	b = a;

	for (i = 1; i < n; i++)
	{
		b++;
	}

	for (k = 0; k < i / 2; k++)
	{
		swaper = a[k];
		a[k] = *b;
		*b = swaper;
		b--;
	}
}

