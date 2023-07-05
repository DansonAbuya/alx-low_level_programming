#include "main.h"

/**
  * _pow_recursion - a function that raises x to the power of y
  * @x: the value to be raised to power of y
  * @y: the power to raise y
  *
  * Return: the value multiplied y times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
