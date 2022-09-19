#include "main.h"

/**
 * _strlen - checks for the length of a string
 * @s: input string
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
