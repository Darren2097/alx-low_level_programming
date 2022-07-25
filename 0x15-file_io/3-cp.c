#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * error_messages - Displays the various error messages for different errors
 * @exit_code: Exit code
 * @err_msg: Error message
 * @type: Data type
 *
 * Return: void
 */

void error_messages(int exit_code, char *err_msg, char type, ...)
{
	va_list ar;

	va_start(ar, type);
	if (type == 's')
		dprintf(STDERR_FILENO, err_msg, va_arg(ar, char *));
	else if (type == 'd')
		dprintf(STDERR_FILENO, err_msg, va_arg(ar, int));
	else if (type == 'N')
		dprintf(STDERR_FILENO, err_msg, "");
	else
		dprintf(STDERR_FILENO, "Error: Invalid type");

	va_end(ar);
	exit(exit_code);
}

/**
 * main - Program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int fd1, fd2;
	char buf[1024];
	ssize_t fd1_read, fd2_write;

	if (argc != 3)
		error_messages(97, "Usage: cp file_from file_to\n", 'N');

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		error_messages(98, "Error: Can't read from file %s\n", 's', argv[1]);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		error_messages(99, "Error: Can't write to %s\n", 's', argv[2]);

	while ((fd1_read = read(fd1, buf, 1024)) > 0)
	{
		fd2_write = write(fd2, buf, fd1_read);
		if (fd2_write == -1)
			error_messages(99, "Error: Can't write to %s\n", 's', argv[2]);
	}

	if (fd1_read == -1)
		error_messages(98, "Error: Can't read from file %s\n", 's', argv[1]);

	if (close(fd1) == -1)
		error_messages(100, "Error: Can't close fd %d\n", 'd', fd1);
	if (close(fd2) == -1)
		error_messages(100, "Error: Can't clode fd %d\n", 'd', fd2);

	return (0);
}
