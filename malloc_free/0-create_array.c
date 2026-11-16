#include "main.h"
#include <stdlib.h>

/**
 * create_array - sets memory allocation for array
 * @size: size of array
 * @c: character to store array with
 *
 * Return: returns a pointer to the initialized array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
