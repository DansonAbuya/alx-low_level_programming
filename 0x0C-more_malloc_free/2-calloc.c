#include "main.h"
#include <stdlib.h>

/**
  * _calloc - a function that allocates memory for an with malloc
  * @nmemb: number of array members
  * @size: the size
  *
  * Return: result of allocation
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	r = malloc(b);

	if (r == NULL)
		return (NULL);

	while (a < b)
	{
		r[a] = 0;
		a++;
	}

	return (r);
}
