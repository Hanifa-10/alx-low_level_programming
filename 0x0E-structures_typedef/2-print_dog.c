#include <stdio.h>
#include "dog.h"

/**
* print_dog -print struct dog
* @d: pointer of type dog
*/

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
else
printf("%s\n", "Name: (nil)");

if (d->age >= 0)
{
printf("Age: %f\n", d->age);
}
else
printf("%s\n", "Age: (nil)");

if (d->owner != NULL);
{
printf("Owner: %s\n", d->owner);
}
else
printf("%s\n", "Owner: (nil)");
}
}

