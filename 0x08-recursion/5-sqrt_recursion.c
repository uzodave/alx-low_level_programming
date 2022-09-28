#include "main.h"

/**
 * square_check - checks for perfect squares
 * @n: number passed from _sqrt_recursion function
 * @x: variable checks starting from 1
 * Return: X for natural sqrt, -1 and -1 for <0
 */
int square_check(int n, double x)
{
	if ((n / x) == x)
		return (x);
	if (x * x < n)
		return (square_check(n, x + 1));
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 * @n: integer to be square root(ed)
 * Return: x
 */
int _sqrt_recursion(int n)
{
	return (square_check(n, 1));
}
