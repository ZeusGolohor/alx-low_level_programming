#include "main.h"

/**
  * create_file - Used to create a file.
  * @filename: const char *.
  * @text_content: char *.
  * Return: int.
  */

int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == (-1))
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0';)
			len++;

		write(fd, text_content, len);
	}
	else
	{
		write(fd, "", 0);
	}
	return (1);
}
