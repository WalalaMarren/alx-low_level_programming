#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @action: pointer to a function
 * @array: array of function
 * @size: the size for the array
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
