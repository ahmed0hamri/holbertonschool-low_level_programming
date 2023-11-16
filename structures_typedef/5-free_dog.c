#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - whoooo let the dogs out? whoof, Whoof Whoof
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
