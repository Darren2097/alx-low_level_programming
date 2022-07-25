#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints to the POSIX standard output
 * @filename: File name
 * @letters: Number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t fd_read, write_fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fd_read = read(fd, buf, letters);
	if (fd_read == -1)
		return (0);

	buf[letters + 1] = '\0';
	close(fd);

	write_fd = write(STDOUT_FILENO, buf, fd_read);
	if (write_fd == -1)
		return (0);

	return (fd_read);
}
