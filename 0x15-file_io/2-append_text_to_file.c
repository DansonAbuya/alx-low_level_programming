#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - a function that appends a text to a file
 * @filename: ...
 * @text_content: ..
 *
 * Return:..
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int t = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[t] != '\0')
	{
		t++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, t);

	return (1);
}
