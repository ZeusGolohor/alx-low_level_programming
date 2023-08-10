#include "main.h"

/**
 * main - program entry point.
 * @ac: arguement count.
 * @av: arguement vector.
 *
 * Return: int.
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else
	{
		_copy(ac, av);
	}
	return (0);
}

/**
 * _copy - A function used to copy content from one file to another.
 * @ac: arguement count.
 * @av: arguement vector.
 *
 * Return: void.
 */
void _copy(__attribute__((unused)) int ac, char *av[])
{
	int fd1, fd2;

	if ((access(av[1], F_OK | R_OK) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd1 = open(av[1], O_RDONLY);
	if (access(av[2], F_OK) == -1)
		fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	else
		fd2 = open(av[2], O_WRONLY | O_TRUNC);
	if (access(av[2], F_OK) == -1)
		fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	else
		fd2 = open(av[2], O_WRONLY | O_TRUNC);
	if ((fd2 == -1) || (access(av[2], W_OK) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	_copier(fd1, fd2, av[1], av[2]);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * _copier - A function used to copy contents from one file to another.
 * @fd1: file descriptor of the file to copy from.
 * @fd2: file descriptor of the file to copy into.
 * @file1_name: name of @fd1.
 * @file2_name: name of @fd2.
 *
 * Return: void.
 */
void _copier(int fd1, int fd2, char *file1_name, char *file2_name)
{
	char buffer[1024];
	int size = 0, w = 0;

	while ((size = read(fd1, buffer, 1024)) > 0)
	{
		w = write(fd2, buffer, size);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2_name);
			exit(99);
		}
	}
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1_name);
		exit(98);
	}
}
