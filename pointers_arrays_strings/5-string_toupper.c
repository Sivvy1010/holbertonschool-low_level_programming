#include "main.h"

/**
 * *string_toupper - converts lowercase to uppercase characters
 * @str: pointer to string
 * Return: returns uppercase characters
 */

char *string_toupper(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = 'A' + (str[a] - 'a');
		}
		a++;
	}
	return (str);
}
