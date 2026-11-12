#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string to search
 * @c: character to locate in string
 * Return: pointer to matching character
 */

char *_strchr(char *s, char c)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			i++;
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
