#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_separator - prints separator between printed values
 * @printed: the call to print separator
 * Return: returns 1
 */

int print_separator(int printed)
{
	if (printed != 0)
	{
		printf(", ");
	}
	return (1);
}
/**
 * print_all - function to print format string
 * @format: string of type specifiers for the variadic arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed = 0;
	char *value;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printed = print_separator(printed);
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printed = print_separator(printed);
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printed = print_separator(printed);
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printed = print_separator(printed);
				value = va_arg(args, char *);
				if (value == NULL)
				{
					value = "(nil)";
				}
				printf("%s", value);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
