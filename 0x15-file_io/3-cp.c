#include "main.h"

int main(int ac, char *av[])
{
	int i = 0;

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

void _copy(int ac, char *av[])
{
	int fd1, fd2;
	char *file1 = av[1], *file2 = av[2], *_file2 = av[2];

	if ((access(av[1], F_OK | R_OK) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd1 = open(file1, O_RDONLY);
/**	fd2 = open(file2, O_CREAT | O_WRONLY);*/
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
	_copier(fd1, fd2);
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

void _copier(int fd1, int fd2)
{
	char buffer[1024];
	char c;

	printf("%d, %d\n", fd1, fd2);
	read(fd1, &c, 1);
	write(fd2, &c, 1); 
}
