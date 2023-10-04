#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Open and read the content of a text file, then output it to the standard output (STDOUT)
 * @filename: Content from the text file being accessed and processed
 * @letters: The quantity of characters to be examined
 * Return: w- The real count of bytes that have been both read and subsequently displayed Equals 0 in cases of function failure or when the filename is NULL.
 *        
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
