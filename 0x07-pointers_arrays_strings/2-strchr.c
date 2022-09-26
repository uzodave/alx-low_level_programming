#include "main.h"

/**
 * _strchr - locates a character in string
 * the function returns a pointer to the
 * first occurence of a character in a string
 * @s: pointer to the character string
 * @c: the character itself
 * Return: a pointer to dest
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
