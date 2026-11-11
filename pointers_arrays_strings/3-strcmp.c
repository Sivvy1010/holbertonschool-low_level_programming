#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer first string
 * @s2: pointer to second string
 * Return: returns difference in characters
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int difference;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	difference = s1[i] - s2[i];
	return (difference);
}
