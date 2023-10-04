#include "main.h"

/**
 * create_file - Generates a new file
 * @filename: A reference to the file's name for the purpose of creation.
 * @text_content: A reference to a string for writing into the file.
 *
 * Return: In the event of a function failure, the return value is -1; otherwise, it's 1.
 *         
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
