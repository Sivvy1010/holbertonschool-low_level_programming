#include "main.h"
#include <stdlib.h>

/**
 * convert_null - converts NULL to empty string value
 * @s: string to convert
 * Return: returns empty string
 */

char *convert_null(char *s)
{
	if (s == NULL)
	{
		s = "";
	}
	return (s);
}

/**
 * string_length - counts characters in string
 * @str: characters to count
 * Return: returns string length
 */

unsigned int string_length(char *str)
{
	unsigned int length;

	length = 0;

	str = convert_null(str);

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: integer value
 * Return: returns concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int length;
	unsigned int length2;
	unsigned int copy_len;
	unsigned int index;

	s1 = convert_null(s1);
	s2 = convert_null(s2);

	length = string_length(s1);
	length2 = string_length(s2);

	copy_len = length2;

	if (n < length2)
	{
		copy_len = n;
	}
	s3 = malloc(length + (copy_len + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index < length)
	{
		s3[index] = s1[index];
		index++;
	}
	index = 0;

	while (index < copy_len)
	{
		s3[length + index] = s2[index];
		index++;
	}
	s3[length + copy_len] = '\0';
	return (s3);
}
