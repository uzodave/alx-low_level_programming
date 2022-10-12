#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - a function that searches for an integer
 * @array: where the elements are contained
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: int_index returns the index of the first element for
 * which the cmp function does not return 0, if no element matches
 * return -1, if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
				return (i);
		}
	}
	return (-1);
}
