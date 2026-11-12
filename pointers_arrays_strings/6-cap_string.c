#include "main.h"

/**
 * *cap_string - pointer to function
 * @ptr: pointer to string
 * Return: returns Uppercase characters at start of string
 */

char *cap_string(char *ptr)
{
	int a;

	a = 0;

	while (ptr[a] != '\0')
	{
		if (ptr[a] >= 'a' && ptr[a] <= 'z')
		{
			if (a == 0 || ptr[a - 1] == ' ' ||
					ptr[a - 1] == '.' || ptr[a - 1] == ',' ||
					ptr[a - 1] == '"' || ptr[a - 1] == '(' ||
					ptr[a - 1] == ')' || ptr[a - 1] == '{' ||
					ptr[a - 1] == '}' || ptr[a - 1] == '!' ||
					ptr[a - 1] == '?' || ptr[a - 1] == '\t' ||
					ptr[a - 1] == '\n' || ptr[a - 1] == ';')
			{
				ptr[a] = 'A' + (ptr[a] - 'a');
			}
		}
		a++;
	}
	return (ptr);
}
