#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct dog on success
 * Null on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *pup;
	int x, y, z;
	char *nm, *ow;

	pup = malloc(sizeof(struct dog));
	if (pup == NULL)
		return (NULL);

	for (x = 0; name[x] != '\0'; x++)
		;
	for (y = 0; owner[y] != '\0'; y++)
		;


	nm = malloc(sizeof(char) * (x + 1));
	if (nm == NULL)
	{
		free(pup);
		return (NULL);
	}

	ow = malloc(sizeof(char) * (y + 1));
	if (ow == NULL)
	{
		free(nm);
		free(pup);
		return (NULL);
	}

	for (z = 0; z <= x; z++)
		nm[z] = name[z];
	nm[z] = '\0';

	for (z = 0; z <= y; z++)
		ow[z] = owner[z];
	ow[z] = '\0';

	pup->name = nm;
	pup->age = age;
	pup->owner = ow;

	return (pup);
}
