#include "main.h"

/**
 * create_file - creates a file with specific permissions and writes text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * By: Sina Mathew
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdo;
	ssize_t written_bytes = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fdo == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close(fdo);
			return (-1);
		}
	}

	close(fdo);

	return (1);
}

