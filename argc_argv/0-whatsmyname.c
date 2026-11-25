#include <stdio.h>

/**
 * main - prints the filename followed by a newline
 * @argc: number of command line arguments
 * @argv: array of command line argument strings
 *
 * Return: return always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
