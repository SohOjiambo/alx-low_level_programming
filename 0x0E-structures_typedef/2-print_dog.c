#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: no return
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	char *name = d->name;

	if (name == NULL)
	}
		name = "(nil)"
	}

	float age = d->age;

	if (age == NULL)
	{
		printf("Name: %s\n", name);
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", name);
		printf("Age: %f\n", *age);
	}

	char *owner = d->owner;

	if (owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("owner: %s\n", owner);
	}
}
