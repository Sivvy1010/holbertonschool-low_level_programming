#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to initial string
 * @accept: pointer to accept string
 * Return: returns the number of initial bytes in s that are also in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}
