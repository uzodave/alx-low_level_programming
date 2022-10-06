#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer variable
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;/*can be removed, *ptr = malloc(b) also valid*/

	ptr = (void *)malloc(b);/*same without the (void *)*/

	if (ptr ==  NULL)
	{
		exit(98);
	}
	return (ptr);
}
