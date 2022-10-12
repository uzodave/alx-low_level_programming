#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - is a function that executes a function given as a
 * parameter on each element of an array
 * @size: size of the array
 * @action: a pointer to the function to be used
 * @array: array to be iterated over
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i; /*because size_t can't be negative*/

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
