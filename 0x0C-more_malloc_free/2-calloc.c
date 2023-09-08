#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Populates memory using a uniform byte value
 * @s: THe region in the momery that needs to be populated
 * @b: character to duplicated
 * @n: The count of repetitions for copying b
 *
 * Return: Memory region's pointer deonted by s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - Reserves memory for an array
 * @nmemb: THe quantity of items within the array
 * @size: The dimension or magnitude of individual elements
 *
 * Return: pointer to the memory that has been allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
