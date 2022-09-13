#include "main.h"

/**
 * print_sign - check the code and print the appropriate sign
 * for the given number.
 * @n: variable representing all integers
 * Return: return 1 for + and - 0 for neither.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

