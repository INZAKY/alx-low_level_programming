#include "main.h"

/**
 * set_bit - Assigns a value of 1 to a bit located at a specified index.
 * @n: A reference to the number that needs to be modified
 * @index: The position within the number where the bit should be changed to 1
 *
 * Return: Returns 1 to indicate success and -1 to indicate failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
