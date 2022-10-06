#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc
 * and free
 * @old_size: old size in bytes of ptr
 * @new_size: new size in bytes
 * @ptr: pointer to the memory previously allocated (by malloc)
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrNew;
	char *ptOld;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptrNew = malloc(new_size);
	if (!ptrNew)
		return (NULL);

	ptOld = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptrNew[i] = ptOld[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptrNew[i] = ptOld[i];
	}
	free(ptr);
	return (ptrNew);
}
