#include "main.h"

/**
  * _islower -finds a lowercase character
  * @n:is the character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int n)
{
	if (n >= 97 && n <= 122)
	{
		return (1);
	}

	return (0);
}

