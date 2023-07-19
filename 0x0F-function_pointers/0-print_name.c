#include "function_pointers.h"

/**
  * print_name - the function that prints the name
  * @name: the name to be printed
  * @f: the pointer to the function
  *
  * Return: 0
  */
void print_name(char *name, void (*f)(char *))
{
	_putchar("The name is %s\n", name)
}
