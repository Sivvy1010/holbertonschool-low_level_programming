#include "main.h"

/**
 * rev_string - reverses the string s
 * @s: pointer to string value
 */

void rev_string(char *s)
{
	int i;
	int a;
	int b;
	char t;

	i = 0;


	while (s[i] != '\0')
	{
		i++;
	}
	a = 0;
	b = i - 1;

	while (a < b)
	{
		t = s[a];
		s[a] = s[b];
		s[b] = t;

		a++;
		b--;
	}
}
