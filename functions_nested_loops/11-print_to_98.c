#include <stdio.h>
#include "main.h"

/**
 * print_to_98- function to print to integer value n
 * @n: stores integer value
 */

void print_to_98(int n)
{
	int i;

	i = n;

	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i = i + 1;
		}
	}
	else if (i > 98)
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i = i - 1;
		}
	}
	printf("%d\n", i);
}
