#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: an array of 8 rows and columns
 * Return: nichts
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;

	for (j = 0; j < 8; j++)
	{
		_putchar(a[i][j]);
		if (j == 7 && i < 7)
		{
			i++;
			j = -1;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

