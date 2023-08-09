#include "main.h"

/**
 * create_file - A  function that creates a file.
 * @filename: name of the file to be created or accessed.
 * @text_content: content to be added to @filename.
 *
 * Return: int.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (text_content != NULL)
		len = write(fd, text_content, strlen(text_content));
	else
		len = write(fd, "", 0);
	close(fd);
	return (len);
}
