#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of the integers in an array
 * followed by a newline
 * @a: pointer to the array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
