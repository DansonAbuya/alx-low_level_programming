#include "main.h"

/**
  * set_string - A function that sets the value of a pointer to char
  * @s: the value to modified modify
  * @to: the value to assign
  *
  * Return: 0
  */
void set_string(char **s, char *to)
{
	*s = to;
}
