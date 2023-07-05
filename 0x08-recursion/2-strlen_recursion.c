#include "main.h"

/**
  * _strlen_recursion - a function that outputs the length of a string
  * @s: the string to output the length
  *
  * Return: length of integer
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}

