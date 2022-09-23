#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be input
 * Return: void
 */
void print_number(int n)
{
	unsigned int i, j, k;

	if (n > 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	k = 1;

	while (j > 9)
	{
		j /= 10;
		k *= 10;
	}

		for (; k >= 1; k /= 10)
		{
			_putchar(((i / k) % 10) + '0');
	}

}
