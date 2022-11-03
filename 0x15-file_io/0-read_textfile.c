#include "main.h"

/**
  * read_textfile - Used to read a text file.
  * @filename: const char *.
  * @letters: size_t.
  * Return: ssize_t.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r;
	int i;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == (-1))
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	r = read(fd, buf, letters);
	if (r == (-1))
		return (0);

	*(buf + (letters + 1)) = '\0';
	i = 0;
	while (*(buf + i) != '\0')
	{
		_putchar(*(buf + i));
		i++;
	}
	free(buf);
	close(fd);
	return (r);
}
