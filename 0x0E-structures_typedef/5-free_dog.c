#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: pointer
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);

		if (d->owner)
			free(d->owner);

		free(d);
	}
}
