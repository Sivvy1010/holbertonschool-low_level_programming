#include "function_pointers.h"

/**
 * print_name - calls the function pointed to by f
 * @name: pointer to string to print
 * @f: pointer to function that was passed into print_name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
