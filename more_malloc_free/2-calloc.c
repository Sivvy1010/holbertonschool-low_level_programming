#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: first allocation memory size
 * @size: second allocation memory size
 * Return: pointer to return allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_bytes;
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_bytes = nmemb * size;
	ptr = malloc(total_bytes);

	if (ptr == NULL)
	{
		return (NULL);
	}

	count = 0;

	while (count < total_bytes)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
