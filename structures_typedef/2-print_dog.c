#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
void print_dog(struct dog *d);
{
if (d) 
{
    printf("name: %s\n", d->name ? d->name : "(nil)")
    printf("age: %f\n", d->age)
    printf("owner: %s\n", d->owner ? d->owner : "(nil)")
    return 0
}
}
