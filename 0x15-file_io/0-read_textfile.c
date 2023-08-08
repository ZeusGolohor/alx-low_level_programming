#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the file to be read.
 * @letters: numbers of characters to read from @filename.
 *
 * Return: ssize_t.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t i = 0;
	ssize_t r = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	if (letters != 0)
	{
		buffer = malloc((sizeof(char) * letters) + 1);
		if (buffer == NULL)
			return (0);
		r = read(file, buffer, letters);
		if (r == -1)
			return (0);
		r = write(STDOUT_FILENO, buffer, r);
		free(buffer);
	}
	close(file);
	return (r);
}
