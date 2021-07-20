#include <stdio.h>
#include "dog.h"

/**
* init_dog - initialize variable of type struct dog
* @d: variable to initialize
* @age: struct element 
* @owner: struct element
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

