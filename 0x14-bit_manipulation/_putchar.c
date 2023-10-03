#include "main.h"
#include <unistd.h>
/**
 * _putchar - Outputs the character 'c' to the standard output
 * @c: The character to be displayed
 *
 * Return: On success 1.
 * If an error occurs, the function returns -1, and errno is adjusted accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
