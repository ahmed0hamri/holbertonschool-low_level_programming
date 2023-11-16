#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free my dog he didn't do non
 * @d: struct dog *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->owner);
		if (d->owner)
			free(d->owner);
	}
}
