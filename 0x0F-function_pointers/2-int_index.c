#include "function_pointers.h"
/**
 * int_index - Return the index position if the comparison is true; otherwise, return -1
 * @array: array
 * @size: The size of elements within the array
 * @cmp:  pointer to one of the three functions in the main program
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
