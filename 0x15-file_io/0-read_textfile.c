#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: ...
 * @letters: letters' size
 *
 * Return: .....
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, letter, wr;
	char *t;

	t = malloc(letters);
	if (t == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(t);
		return (0);
	}

	letter = read(file, t, letters);

	wr = write(STDOUT_FILENO, t, letter);

	close(file);

	return (wr);
}
