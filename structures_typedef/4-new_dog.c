#include "dog.h"
#include <stdlib.h>

/**
 * copy_string - function to allocate memory
 * @text: string to copy
 * Return: returns memory allocation
 */

char *copy_string(char *text)
{
	char *copy;
	int count;
	int i;

	count = 0;
	while (text[count] != '\0')
	{
		count++;
	}
	copy = malloc(count + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (text[i] != '\0')
	{
		copy[i] = text[i];
		i++;
	}
	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: pointer to dog's name
 * @age: the dog's age
 * @owner: pointer to the dog's owner
 * Return: returns a pointer to dog_t or null on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name;
	char *new_owner;

	new_name = copy_string(name);

	if (new_name == NULL)
	{
		return (NULL);
	}

	new_owner = copy_string(owner);

	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}
	dog = malloc(sizeof(*dog));

	if (dog == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	dog->name = new_name;
	dog->owner = new_owner;
	dog->age = age;

	return (dog);
}
