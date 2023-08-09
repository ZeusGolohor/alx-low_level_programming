#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd;

	if ((filename == NULL) && (text_content == NULL))
		return (-1);
	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY);
	else
		fd = open(filename, O_CREAT, O_WRONLY, 0600);

	close(fd);

	return (0);	
}
