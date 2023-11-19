#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *d;
	int n1, n2;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	n1 = strlen(name);
	d->name = malloc(sizeof(char) * (n1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	n2 = strlen(owner);
	d->owner = malloc(sizeof(char) * (n2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
	return (d);
}
