#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: an array of 8 rows and columns
 * Return: nichts
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;

	for (j = 0; j < 7; j++)
	{
		_putchar(a[i][j]);
		if (i == 7 && j < 7)
		{
			j++;
			i = -1;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

