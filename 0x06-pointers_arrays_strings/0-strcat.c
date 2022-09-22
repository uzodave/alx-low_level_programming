#include "main.h"

/**
 * _strcat - adds src character to end of dest
 * @src: source variable
 * @dest: destination
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int s1 = 0;
	int s2 = 0;

	while (*(dest + s1) != '\0')
	{
		_putchar(*dest);
		dest++;
			if (*(dest + s1) == '\0')
			{
				while (*(src + s2) != '\0')
				{
					_putchar(*src);
					src++;
				}
			}
	}
	_putchar('\n');
	return (dest);
}
