#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: array of integers being searched
 * @size: the number of elements in the array
 * @cmp: tests each element
 * Return: returns an index or -1 if no match or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (-1);
}
