#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returns a pointer to a newly allocated space
 * in memory which contains the contents of the strings s1 and s2
 * given as parameters
 * @s1: first string
 * @s2: second string.
 * Return: pointer to allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *ptConcat;
	int i, j, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	/* to determine size and allocate enough memory space */
	ptConcat = (char *)malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (ptConcat == NULL)
	{
		return (NULL);
	}
	/*to concatenate the strings to the new address*/
	for (a = 0, b = 0; a < (i + j + 1); a++)
	{
		if (a < i)
			ptConcat[a] = s1[a];
		else
			ptConcat[a] = s2[b++];
	}
	return (ptConcat);
}
