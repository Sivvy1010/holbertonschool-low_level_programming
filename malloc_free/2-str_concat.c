#include "main.h"
#include <stdlib.h>

/**
 * string_length - counts length of strings
 * @str: string to count
 * Return: returns count
 */

int string_length(char *str)
{
	int count;

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: returns concatenated result or NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	int first_length;
	int second_length;
	int index;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	first_length = string_length(s1);
	second_length = string_length(s2);
	result = malloc(first_length + second_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;

	while (s1[index] != '\0')
	{
		result[index] = s1[index];
		index++;
	}
	index = 0;

	while (s2[index] != '\0')
	{
		result[first_length + index] = s2[index];
		index++;
	}
	result[first_length + index] = '\0';
	return (result);
}
