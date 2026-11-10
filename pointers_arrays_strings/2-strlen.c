#include "main.h"

/**
 *_strlen - sets integer value to pointer
 *@s: pointer to s
 *Return: returns value of i
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
