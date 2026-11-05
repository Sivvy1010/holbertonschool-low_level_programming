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
		if (i % 3 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			i = i + 1;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			i = i + 1;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			i = i + 1;
		}
		else
		{
			printf("%d ", i);
			i = i + 1;
		}
	}
	putchar('\n');
	return (0);
}
