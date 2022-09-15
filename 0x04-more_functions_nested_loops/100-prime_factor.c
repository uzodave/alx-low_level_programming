#include <stdio.h>

/**
 *  main - check the code
 *   *
 * Return: Always 0.
 */
int main (void)
{
	long int n = 612852475143;
	long int i;
		
	for (i = 2; i < n; i++)
	{
		if ((n % 1) == 0)
		{
			n = n / i;
		}
	}
		printf ("%ld\n ", i);
			return 0;
}

