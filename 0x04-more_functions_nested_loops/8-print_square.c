#include "main.h"

/**
 * print_square- prints a square using # sign
 * onto the terminal
 * @size: the determinant for how big the square will be
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
			_putchar('#');
		}
		_putchar('\n');
	}
}
