#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: pointer to the matrix of integers
 * @size: matrix dimensions
 */

void print_diagsums(int *a, int size)
{
	int row;
	int col;
	int sum1;
	int sum2;

	row = 0;
	sum1 = 0;
	sum2 = 0;

	while (row < size)
	{
		col = size - 1 - row;
		sum1 += a[row * size + col];
		col = row;
		sum2 += a[row * size + col];
		row++;
	}
	printf("%d, %d\n", sum2, sum1);
}
