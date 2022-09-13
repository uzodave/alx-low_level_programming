#include "main.h"

/**
 * _isalpha - check the code for any letters of the alphabet.
 * @c: variable representing letters
 * Return: 1 for true and 0 for false.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
