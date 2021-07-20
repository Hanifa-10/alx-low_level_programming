#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees memory allocated for a struct dog
* @d: pointer to free
*/

void free_dog(dog_t *d)
{
if (d != 0)
{
free(d->name);
free(d->owner);
free(d);
}
}

