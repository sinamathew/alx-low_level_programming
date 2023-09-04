#include "main.h"

/**
 * read_textfile - reads and prints a text file to the POSIX standard output
 * filename: name of the file
 * letters: the number of letters it should read and print
 * By: Sina Mathew
 *
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char buf[letters];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n = read(fd, buf, letters);
	close(fd);


	if (n < 0)
		return (0);

	write(STDOUT_FILENO, buf, n);

	return (n);
}

