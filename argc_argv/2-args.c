#include <stdio.h>

/**
 * main - prints all arguments recieved
 * @argc: number of command line arguments
 * @argv: array of command line argument strings
 *
 * Return: return always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
