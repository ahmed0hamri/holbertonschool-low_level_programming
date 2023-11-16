#include "dog.h"
/**
 * init_dog - initialize a variable type "struct dog"
 * @d: struct dog *
 * @name: char *
 * @age: float
 * @owner: char*
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner) 
{
    d->name = name;
    d->age = age;
    d->owner = owner;
}

