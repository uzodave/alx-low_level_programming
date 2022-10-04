#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string
 * given as a parameter
 * Description: To solve this problem, we must first find
 * (1)the length of the given string,
 * (2)the size in bytes that should be allocated
 * (3)how to copy this string to the new locaton and finally
 * (4)to return a pointer to the first
 * element of the string
 * @str: string to be copied.
 * Return: pointer to allocated space
 */
char *_strdup(char *str)
{
	char *ptrStr;
	int i = 0, count = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0') /*to get length of str*/
	{
		i++;
	}
	/* to determine size and allocate enough memory space */
	ptrStr = (char *)malloc(i * sizeof(*ptrStr) + 1);

	if (ptrStr == NULL)
	{
		return (NULL);
	}

	/*to copy the string to the new address*/
	for (count = 0; count < i; count++)
	{
		ptrStr[count] = str[count];
	}
	ptrStr[count] = '\0';
	return (ptrStr);
}
