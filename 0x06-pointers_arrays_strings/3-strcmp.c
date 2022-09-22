#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: seconde string
 * Return: 0 for equality and 1 for otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (j);
}
