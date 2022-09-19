#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the
 * location pointed to by dest
 * @dest: pointer to string
 * @src: pointer to string
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}

	*(dest + length) = '\0';

	return (dest);
}
