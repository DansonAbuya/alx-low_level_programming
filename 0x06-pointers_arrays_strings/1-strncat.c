#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: stotage for  destination string
  * @src: Storage for the source string
  * @n:  limits of the concatenation
  *
  * Return: pointer to the resulting dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int mylen = 0, b = 0;

	while (dest[mylen])
	{
		mylen++;
	}

	while (b < n && src[b])
	{
		dest[mylen] = src[b];
		mylen++;
		b++;
	}

	dest[mylen + n + 1] = '\0';

	return (dest);
}

