#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array of char
 * @c: character to be printed
 * Return: A pointer to the array, or NULL for failure
 */
char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int i;/*iterable(counter)*/

	/* to allocate enough space for all array elements*/
	ptrArray = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	/* assign the char to the specific memory location*/
	{
		ptrArray[i] = c;
	}
	return (ptrArray);
}
