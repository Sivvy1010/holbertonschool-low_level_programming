#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string into another slot of memory
 * @str: string to copy
 *
 * Return: returns a pointer to the duplication.
 */

char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	dup = malloc(i+1);

	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
