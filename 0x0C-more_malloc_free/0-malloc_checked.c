#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size of memory
 * Return: pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
