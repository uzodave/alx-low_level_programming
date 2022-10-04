#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
		s = "";
	return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
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
	int i, j;

	/*finding the lengths of s1 and s2*/
	i = _strlen(s1);
	j = _strlen(s2);

	/* to determine size and allocate enough memory space */
	ptConcat = (char *)malloc(i + j + 1);
	if (ptConcat == NULL)
	{
		return (NULL);
	}
	/*to concatenate the strings to the new address*/
	for (i = 0; s1[i] != '\0'; i++)
		ptConcat[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		ptConcat[i] = s2[j];
	ptConcat[i] = '\0';
	return (ptConcat);
}
