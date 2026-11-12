#include "main.h"

/**
 * leet - converts letter characters to number characters
 * @p: pointer to string
 * Return: pointer to modified string
 */

char *leet(char *p)
{
	char numbers[] = {'1', '1', '7', '7', '0', '0', '3', '3', '4', '4'};
	char letters[] = {'l', 'L', 't', 'T', 'o', 'O', 'e', 'E', 'a', 'A'};
	int i;
	int j;

	i = 0;

	while (p[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (p[i] == letters[j])
			{
				p[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (p);
}
