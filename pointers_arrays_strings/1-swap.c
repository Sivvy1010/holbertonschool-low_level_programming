#include "main.h"

/**
 * swap_int(int *a, int *b)- sets integer pointers
 * @a: pointer to integer a
 * @b: pointer to integer b
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
