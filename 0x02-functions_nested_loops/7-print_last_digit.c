#include "main.h"

/**
 * print_last_digit - checks the code and prints the last
 * digit of any given integer
 * @n: variable representing all possible integers
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
