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
		_putchar(',');
		_putchar(' ');
		_putchar('1');
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('-');
		_putchar('1');
		_putchar('\n');
	}
	return (0);
}

