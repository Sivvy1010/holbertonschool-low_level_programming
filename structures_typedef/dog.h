#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog data
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

/* Prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *copy_string(char *text);
dog_t *new_dog(char *name, float age, char *owner);

#endif
