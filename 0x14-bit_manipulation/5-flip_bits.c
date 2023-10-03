#include "main.h"

/**
 * flip_bits - Determines the count of bits to be modified
 * 
 * @n: first #
 * @m: second #
 *
 * Return: # of bits to determine
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
