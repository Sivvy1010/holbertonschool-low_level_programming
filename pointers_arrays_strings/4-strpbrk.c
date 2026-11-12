#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to first string
 * @accept: pointer to second string
 * Return: pointer to the matching byte or NULL when no byte matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
