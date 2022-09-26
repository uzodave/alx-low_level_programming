#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the character string
 * @accept: characters being searched for
 * Return: pointer to s for success and null for failure
 */
char *_strpbrk(char *s, char *accept)

{
	int i;

	while (*s != '\0')
	{
		s++;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}
