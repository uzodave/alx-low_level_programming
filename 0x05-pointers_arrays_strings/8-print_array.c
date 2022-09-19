#include <stdio.h>
#include "main.h"

/**
 * print_array - print n element of an array of integers
 * @a: input variable for array
 * @n: number of elements for an integer
 * Return - void
 */
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != n - 1)
			printf(", ");
	}
	printf("\n");
}
