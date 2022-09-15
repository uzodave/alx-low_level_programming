#include "main.h"

/**
 * _isupper - checks for the uppercase character therein.
 * @c: variable representing all possible 26 letters
 * Return: 1 for success and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
