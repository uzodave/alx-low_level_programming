#include "main.h"

/**
 * _strncpy - copies n bytes of a string to a destination
 * @dest: destination string
 * @src: source string
 * @n: n byte determinant
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
