#include "main.h"

/**
  * append_text_to_file - Appends text to the end of a file.
  * @filename: const char *
  * @text_content: char
  * Return: int
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK | W_OK) == 0)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
	}
	else
		return (-1);

	if (fd == (-1))
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0';)
			len++;

		write(fd, text_content, len);
	}
	close(fd);
	return (1);
}
