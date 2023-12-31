#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator -  executes a function given as a parameter
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end  = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}
