#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mininum integer value
 * @max: maximum integer value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptrArr;/*create a char pointer*/
	int i, range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	ptrArr = malloc(range * sizeof(int));
	if (ptrArr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		ptrArr[i] = min + i;
	}

	return (ptrArr);
}
