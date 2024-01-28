#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned long int i = 1;
	/*
	 * char *m;
	m = (char *) & i;

	if (*m == 1)
	{
		printf("Little endian\n");
	}
	else
	{
		printf("Big endian\n");
	}
	*/

	return (*(char *) &i);
}
