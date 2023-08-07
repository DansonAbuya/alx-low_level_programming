#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file - a function that appends text at the end of a file
  * @filename: is the name of the file
  * @text_content:  is the NULL terminated string to add at the end of the file
  *
  * Return: 1 if the file exists and -1 if filenotexist/youdonothavepermissions
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
  * _strlen - Outputs the length of a string
  * @s: the string to be counted
  *
  * Return: length of the tring
  */
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;

	return (l);
}
