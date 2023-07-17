#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog the function that prints all the data of a dog
  * @d: A dog structure
  *
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("DOg's name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Dog's age: %f\n", (d->age) ? d->age : 0);
		printf("The dog's owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
