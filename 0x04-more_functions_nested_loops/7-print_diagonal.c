#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * onto the terminal
 * @n: the determinant for how long this line will be
 * Return: Always jackshit
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i - 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
