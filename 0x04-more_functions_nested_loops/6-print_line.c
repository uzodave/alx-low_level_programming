#include "main.h"

/**
 * print_line - prints a kind of line in the terminal
 * @n: the determinant for how long this line will be
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (!(n <= 0))
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
