#include "main.h"

/**
 * get_bit - Provides the bit's value at a specific index within a decimal number
 * @n: The numerical value to look for
 * @index: The position or position number of the bit
 *
 * Return: The binary digit's worth or state
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
