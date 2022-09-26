#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the character string
 * @accept: pointer to the substring to be checked
 * Return: length of the substring(prefix)
 */
unsigned int _strspn(char *s, char *accept)

{
	unsigned int initial_length = 0;
	unsigned int i, j;

	for (i = 0; s[i] != '\0' && i == initial_length; i++)
	{
		for (j = 0; accept[j] != '\0'; i++)
		{
			if (s[i] == accept[j])
				initial_length++;
	}
	}
	return (initial_length);
}
