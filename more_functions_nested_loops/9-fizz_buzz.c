#include <stdio.h>

/**
 * main- Initialize Main Function
 * printf: prints value
 * putchar: prints newline
 * Return: Ends Program
 */

int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	if (i < 100)
	{
		putchar(' ');
	}
	i = i + 1;
	}
	putchar('\n');
	return (0);
}
