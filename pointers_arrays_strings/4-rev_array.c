#include "main.h"

/**
 * reverse_array - reverse the integers in an array
 * @n: number of items in array
 * @a: pointer to array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int left;
	int right;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
