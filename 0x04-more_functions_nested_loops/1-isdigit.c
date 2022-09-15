#include "main.h"

/**
 * _isdigit - checks the code for digits between 0 and 9
 * @c: placeholder for all possible digits 0 through 9
 * Return: 1 for true and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

