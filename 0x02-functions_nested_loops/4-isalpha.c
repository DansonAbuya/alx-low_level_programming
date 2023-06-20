#include "main.h"


/**
  * _isalpha - Finds alphabetic characters
  * @n:is the character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int n)
{
	if ((c >= 65 && n <= 90) || (n >= 97 && n <= 122))
	{
		return (1);
	}

	return (0);
}

