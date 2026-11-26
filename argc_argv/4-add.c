#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line argument strings
 * Return: 1 if an argument contains a non digit, otherwise 0
 */

int main(int argc, char *argv[])
{
	int i;
	int total;
	int j;

	i = 1;
	total = 0;

	while (i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		total = total + atoi(argv[i]);
		i++;
	}
	printf("%d\n", total);
	return (0);
}
