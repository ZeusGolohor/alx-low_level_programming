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
		buffer[(letters + 1)] = '\0';
		while (buffer[i] != '\0')
		{
			_putchar(buffer[i]);
			++i;
		}
		free(buffer);
	}
	close(file);
	return (r);
}

/**
  * _putchar - Used to write to the stdout.
  * @c: char
  * Return: int.
  */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

