#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - calculates the length of a string
 * @s: string
 * Return: string length
 */
unsigned int str_len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second array of characters
 * @n: unsigned integer variable
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;/*create a char pointer*/
	unsigned int i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= str_len(s2))/*if n is bigger than the second string*/
		n = str_len(s2);

	len = str_len(s1) + n + 1;/* +1 accounts for null terminator*/

	ptr = malloc(sizeof(*ptr) * len);

	if (ptr ==  NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';
	return (ptr);
}
