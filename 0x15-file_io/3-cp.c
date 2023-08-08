#include "main.h"

/**
  * main - Entry point.
  * @ac: int
  * @av: char *
  * Return: int.
  */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to", av[0]);
		exit(97);
	}

	_cp(av[1], av[2]);
	return (0);
}

/**
  * _cp - Used to copy the content of a file to another file.
  * @file_from: char *
  * @file_to: char *
  * Return: void
  */

void _cp(const char *file_from, const char *file_to)
{
	int fd1, fd2, cl;
	char *buf;

	if ((access(file_to, F_OK)) == 0)
		fd2 = open(file_to, O_WRONLY | O_TRUNC);
	else
		fd2 = open(file_to, O_CREAT | O_WRONLY, 0664);

	if ((fd2 == (-1)) || (access(file_to, W_OK)) != 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if ((access(file_from, F_OK | R_OK)) == 0)
		fd1 = open(file_from, O_RDONLY);
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		exit(98);

	read(fd1, buf, 1024);
	write(fd2, buf, 1024);
	free(buf);
	cl = close(fd1);
	if (cl == (-1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	cl = close(fd2);
	if (cl == (-1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

