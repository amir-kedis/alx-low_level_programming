#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free a dog
 * @d: pointer to dog_t
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
