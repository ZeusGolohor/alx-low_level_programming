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
	size_t x = 0;
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
		read(file, buffer, letters);
	}
	while ((x < letters) && ((buffer[i] != '\0') || (buffer[i] != EOF)))
	{
		_putchar(buffer[i]);
		++i;
		++x;
	}
	free(buffer);
	close(file);
	return (i);
}

/**
  * _putchar - Used to write to the stdout.
  * @c: char
  * Return: int.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

