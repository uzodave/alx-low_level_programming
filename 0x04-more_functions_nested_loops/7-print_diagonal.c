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
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
			_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
