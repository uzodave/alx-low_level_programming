#include "main.h"

/**
 * _isalpha - check the code for letters upper or lowercases.
 * @c: variable representing a letter
 * Return: 1 true and 0 false.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c >= 'a') || (c <= 'Z' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
