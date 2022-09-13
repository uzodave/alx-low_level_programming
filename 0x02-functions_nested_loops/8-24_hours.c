#include "main.h"

/**
 * jack_bauer - print all hours from 00:00 to 23:59
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 24; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; i < 24; i++)
		{
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');

			c = j / 10;
			d = j % 10;

			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
return;
}
