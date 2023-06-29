#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: destination string
  * @src:  source string
  *
  * Return:  pointer to the  string dest result
  */
char *_strcat(char *dest, char *src)
{
	int mylen = 0, a;

	while (dest[mylen])
	{
		mylen++;
	}

	for (a = 0; src[a] != 0; a++)
	{
		dest[mylen] = src[a];
		mylen++;
	}

	dest[mylen] = '\0';
	return (dest);
}
