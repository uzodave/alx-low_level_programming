#include "main.h"

/**
 * print_square - prints a square using # sign
 * onto the terminal
 * @size: the determinant for how big the square will be
 * Return: Always jackshit
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
