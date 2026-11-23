#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function to act on each element in the array
 * @array: array of integers
 * @size: number of elements
 * @action: function called for each integer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
