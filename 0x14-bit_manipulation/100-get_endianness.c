#include "main.h"

/**
 * get_endianness - Verifies the endianness of a machine, whether it is little-endian or big-endian
 * Return: Use 0 to represent big-endian and 1 for little-endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
