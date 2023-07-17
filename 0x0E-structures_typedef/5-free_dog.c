#include <stdlib.h>
#include "dog.h"

/**
  * free_dog -the function that frees the dog
  * @d: the dog
  *
  * Return: freed
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
