#include "main.h"

/**
  * _strlen - Outputs the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}

	return (l);
}

