#include "main.h"

/**
  * _strncpy - function that copies the string
  * @dest: storage of the destination string
  * @src: Storage of the source string
  * @n:  limits the string copying
  *
  * Return: string value of dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
