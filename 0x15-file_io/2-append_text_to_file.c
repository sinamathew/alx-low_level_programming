#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the NULL-terminated string to add at the end of the file
 * By: Sina Mathew
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo;
	ssize_t written_bytes = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(fdo, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close(fdo);
			return (-1);
		}
	}

	close(fdo);

	return (1);
}

