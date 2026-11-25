#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 integers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: return 1 on error, return 0 on success
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
