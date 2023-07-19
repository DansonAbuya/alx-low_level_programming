#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - the function that prints the name
  * @name: the name to be printed
  * @f: the pointer to the function
  *
  * Return: 0
  */
void print_name(char *name, void (*f)(char *))
{
	printf("The name is %s\n" ,name)
}
