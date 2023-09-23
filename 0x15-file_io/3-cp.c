#include "main.h"


/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments (file_from and file_to)
 *
 * By: Sina Mathew
 * Return: 0 on success, or exit with error codes on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}


/**
 * open_source_file - Opens the source file for reading
 * @from_filename: name of the source file
 * @fd_from: pointer to the file descriptor of the source file
 * By: Sina Mathew
 *
 * Return: ) on success, or exit with error codes on failure
 */
int open_source_file(const char *from_filename, int *fd_from)
{
	*fd_from = open(from_filename, O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n" from_filename);
		return (98);
	}
	return (0);
}


/**
 * open_dest_file - Opens the destination file for writing
 * @to_filename: name of the ddestination file
 * @fd_to: pointer to the file descriptor of the destination file
 *
 * Return: 0 on success, or exit with error codes failure
 */
int open_dest_file(const char *to_filename, int *fd_to)
{
	*fd_to = open(to_filename, O_WRONLY | O_CREAT \ O_TRUNc, 0664);
	if (*fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to_filename);
		return (99);
	}
	return (0);
}


/**
 * copy_file - copies the content of one file to another
 * @from_filename: name of the source file
 * @to_filename: name of the destination file
 * By: Sina Mathew
 *
 * Return: 0 on success, of exit with error codes on failure
 */
int copy_file(const char *from_filename, const char *to_filename)
{
	int fd_from, fd_to, rd, wr;
	char buf[1024];

	if (open_source_file(from_filename, &fd_from) != 0)
		return (98);
	if (open_dest_file(to_filename, &fd_to) != 0)
	{
		close(fd_from);
		return (99);
	}
	while ((rd = read(fd_from, buf, 1024)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr != rd)
		{
			dprintf(2, "Error: Can't write to %s\n", to_filename);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from_filename);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

