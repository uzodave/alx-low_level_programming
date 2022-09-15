#include <stdio.h>

/**
 *  main - check the code
 *   *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 612852475143;
	long int i;
	long int large_prime = 1;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			large_prime *= i;
			n /= i;
			if (n == 1)
			{
				printf("%lu\n", i);
				return (0);
		}
			i = 1;
	}
	}

			return (0);
}

