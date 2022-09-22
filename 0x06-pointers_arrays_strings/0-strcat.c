#include "main.h"

/**
 * _strcat - adds src character to end of dest
 * @src: source variable
 * @dest: destination
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		_putchar(*dest);
		dest++;
			if (*dest == '\0')
			{
				while (*src != '\0')
				{
					_putchar(*src);
					src++;
				}
			}
	}
	_putchar('\n');
	return (dest);
}
