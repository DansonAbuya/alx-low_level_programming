#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - a function that allocates memory
  * @b: the memory size to allocate
  *
  * Return: r.
  */
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);

	if (r == NULL)
		exit(98);

	return (r);
}
