#include <stdio.h>
#include "dog.h"

/**
 * print_dog - inf about a dog
 * @d: pointer
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("%s\n", d->name ? d->name : "(nil)");
		printf("%f\n", d->age);
		printf("%s\n", d->owner ? d->owner : "(nill)");
	}
}
