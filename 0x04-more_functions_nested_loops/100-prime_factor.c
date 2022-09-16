#include <stdio.h>

/**
 *  main - check the code
 *   *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	long int pf;

	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}

