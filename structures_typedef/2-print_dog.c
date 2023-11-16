#include "dog.h"
/**
 * print_dog - print a "struct dog"
 * @d: struct dog *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
