#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @a: string to be transformed
 * Return: a
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);

}
