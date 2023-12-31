#include "main.h"

/**
  * _strcpy -function that copies a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}

	dest[l++] = '\0';

	return (dest);
}
