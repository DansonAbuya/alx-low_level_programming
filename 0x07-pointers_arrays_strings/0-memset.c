#include "main.h"

/**
  * _memset - will fil the memory with a constant byte
  * @s:the memory area to fill
  * @b: the constant byte to fill
  * @n:the bytes of memory area to fill
  *
  * Return: returns the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

