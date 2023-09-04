#include "main.h"

/**
 * read_textfile - reads and prints a text file to the POSIX standard output
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 * By: Sina Mathew
 *
 * Return: if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes, return 0
 *	otherwise, return the actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	n = read(fd, buf, letters);
	if (n == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	n = write(STDOUT_FILENO, buf, n);

	close(fd);
	free(buf);

	if (n == -1)
		return (0);

	return (n);
}

