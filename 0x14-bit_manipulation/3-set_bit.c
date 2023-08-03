#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - Ensures the value of a bit is 1 at a given index
  * @n: the number to be  modified
  * @index: the index of the number to be modified
  *
  * Return: 1 incase it worked, or -1 incase an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
