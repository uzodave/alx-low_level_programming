#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integer var
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;
	unsigned int numstr = strlen(separator);

	va_start(args, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		 int x = va_arg(args, int);
		 printf("%d",x);
		 if (i != (n - 1))
			for (j = 0; j < numstr; j++)
			{
		 		putchar(separator[j]);
			}
	}
		printf("\n");
		va_end(args);
}
