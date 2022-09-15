#include "main.h"

/**
 * print_triangle - prints a triangle, (obviously)
 * onto the terminal
 * @size: the determinant for how big this triangle will be
 * Return: Always jackshit
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
			{
			_putchar(' ');
			}
			else
			{
			_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
