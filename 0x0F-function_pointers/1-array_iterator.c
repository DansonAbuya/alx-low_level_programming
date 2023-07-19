#include "function_pointers.h"

/**
  * array_iterator - a function that executes a function
  * @array: the array
  * @size: the size of the array
  * @action: a pointer to the function you need to use
  *
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
