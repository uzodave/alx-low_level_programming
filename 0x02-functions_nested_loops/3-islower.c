#include "main.h"

/**
 * _islower - check for lowercase. Returns 1 if true and 0 if false
 * @c: - letter of the alphabet
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
