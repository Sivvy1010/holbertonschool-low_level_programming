#include <stdio.h>
#include <stdbool.h>

/**
 * main - Initialize function
 * Return: End Program
 */

int main(void)
{
	int i;
	int a;
	int b;
	int sum;

	while (true)
	{
		puts("\nWelcome to calculator\n");
		printf("1/Addition\n2/Subtraction\n3/Multiplcation\n4/Division\n0/Exit\n:");
		scanf("%d", &i);

		if (i >= 1 && i <= 4)
		{
			printf("Enter First Digit: ");
			scanf("%d", &a);
			printf("Enter Second Digit: ");
			scanf("%d", &b);

			if (i == 1)
			{
				sum = a + b;
				printf("\n%d + %d = %d\n", a, b, sum);
			}
			else if (i == 2)
			{
				sum = a - b;
				printf("\n%d - %d = %d\n", a, b, sum);
			}
			else if (i == 3)
			{
				sum = a * b;
				printf("\n%d * %d = %d\n", a, b, sum);
			}
			else
			{
				float sum = (float)a / b;
				printf("\n%d / %d = %.2f\n", a, b, sum);
			}
		}
		else
		{
			puts("Goodbye");
			return (0);
		}
	}
	return (0);
}
