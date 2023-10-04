#include "main.h"

/**
 * append_text_to_file - Adds text to the conclusion of a file
 * @filename: A reference to the file's name
 * @text_content: The text to append to the file's end.
 *
 * Return: The function returns -1 in cases of function failure, a NULL filename, or when the user lacks write permissions for a non-existent file. Otherwise, it returns 1
 *         
 *        
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
