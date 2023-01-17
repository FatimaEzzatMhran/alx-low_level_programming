#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog - char string
 * @age: age of dog - float
 * @owner: owner of dog - char string
 *
 * Return: pointer to new dog type dog_t or type struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *doggie;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));

	if (doggie == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	doggie->name = malloc(sizeof(char) * i + 1);
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		doggie->name[k] = name[k];

	doggie->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		;
	doggie->owner = malloc(sizeof(char) * j + 1);
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		doggie->owner[k] = owner[k];

	return (doggie);
}
