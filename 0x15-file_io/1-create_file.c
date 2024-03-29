#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Creates a file
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_fd, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
		length = 0;
	}
	else
	{
		length = 0;
		while (text_content[length] != '\0')
		{
			length++;
		}
	}

	write_fd = write(fd, text_content, length);
	if (write_fd == -1)
		return (-1);

	close(fd);

	return (1);
}
