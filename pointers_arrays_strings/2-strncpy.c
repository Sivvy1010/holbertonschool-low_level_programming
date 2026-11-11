#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: maximum number of characters
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (i < n && src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
