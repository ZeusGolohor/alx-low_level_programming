#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: the to be modified.
 * @text_content: text to be added to @filename.
 *
 * Return: int.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK | W_OK) == -1)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if ((fd != -1) && (access(filename, F_OK | W_OK) == 0))
			write(fd, text_content, strlen(text_content));
		else
			return (-1);
		close(fd);
	}
	return (1);
}

