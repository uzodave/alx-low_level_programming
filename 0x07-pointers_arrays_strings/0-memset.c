#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: source pointer
 * @n: number of bytes to filled
 * @b: constant byte
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b; /*same as *(s + i) = b;*/
	}
	return (s);
}

