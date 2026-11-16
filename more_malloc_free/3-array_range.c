#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: returns the newly pointed array
 */

int *array_range(int min, int max)
{
	int count;
	int *array;
	int index;

	if (min > max)
	{
		return (NULL);
	}
	count = max - min + 1;

	array = malloc(count * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	index = 0;

	while (index < count)
	{
		array[index] = min + index;
		index++;
	}
	return (array);
}
