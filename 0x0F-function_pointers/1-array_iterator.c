#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Outputs each element of the array on a separate line
 * @array: array
 * @size: how many elememt to display
 * @action: pointer for printing in either regular or hexadecimal format
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
