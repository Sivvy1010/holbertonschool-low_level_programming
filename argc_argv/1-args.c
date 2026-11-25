#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of command line arguments
 * @argv: array of command line argument strings (unused)
 * Return: return always 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	i = argc - 1;

	printf("%d\n", i);
	return (0);
}
