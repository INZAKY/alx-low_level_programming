#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checker - assign malloc memory
 * @b: number of bytes to assign
 *
 * Return: a pointer to the assigned memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
