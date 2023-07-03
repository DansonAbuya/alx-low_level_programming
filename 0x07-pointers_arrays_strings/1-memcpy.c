#include "main.h"

/**
  * _memcpy - a function that copies memory area
  * @dest:the destination memory area
  * @src: the source memory area
  * @n: the bytes from memory area to be  copied
  *
  * Return: the memory area to be replaced
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int byt;

	for (byt = 0; byt < n; byt++)
	{
		dest[byt] = src[byt];
	}

	return (dest);
}

