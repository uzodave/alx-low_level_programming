#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;
	int h;
	int i;
	int j;
	int k;

	for (x = 0; x <= 99; x++)
	{
		h = x / 10; /* doubles fnum */
		i = x % 10; /* singles fnum */

		for (y = 0; y <= 99; y++)
		{
			j = y / 10;
			k = y % 10;

			if (h < j || (h == j && i < k))
			{
				putchar(h + '0');
				putchar(i + '0');
				putchar(' ');
				putchar(j + '0');
				putchar(k + '0');

				if (!(h == 9 && i == 8 && j == 9 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar('\n');
	return (0);
}


