#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calcs length of string
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
/**
 * *str_cp - copies string
 * @src: source
 * @dest: destination
 * Return: pointer
 */
char *str_cp(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * *new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: ptr or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = str_cp(d->name, name);
	d->age = age;
	d->owner = str_cp(d->owner, owner);

	return (d);
}

