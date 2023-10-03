#include "main.h"

/**
 * clear_bit - Assigns a value of 0 to a specified bit
 * @n: A reference to the number that requires modification
 * @index: The position of the bit to reset or clear
 *
 * Return: Returns 1 to indicate success and -1 to indicate failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
