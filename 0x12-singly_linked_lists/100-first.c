#include <stdio.h>

void print_text(void) __attribute__ ((constructor));

/**
  * print_text - the function that returns the text
  *
  * Return: 0
  */
void print_text(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
