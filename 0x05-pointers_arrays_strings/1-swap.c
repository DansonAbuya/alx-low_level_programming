#include "main.h"

/**
  * swap_int - Exchanges/swaps the values of two integers
  *
  * @a: First integer to swap
  * @b: Second integer to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int swaper;

	swaper = *a;
	*a = *b;
	*b = swaper;

}
