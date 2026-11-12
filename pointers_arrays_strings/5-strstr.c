#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to first string
 * @needle: pointer to second string
 * Return: a pointer to the beginning of the matching substring
 * otherwise return NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
