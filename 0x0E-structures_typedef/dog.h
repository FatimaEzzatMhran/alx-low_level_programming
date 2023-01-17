#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of a dog
 * @name: Name of the Dog, character string
 * @age: Age of the Dog, float
 * @owner: Owner of the Dog, character string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
