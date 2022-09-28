#include "main.h"
/**
 * prime_check - uses some test cases to check if a
 * certain number is a prime number
 * @n: input test variable
 * @x: iterator variable(recursor)
 * Return: 1 for prime and 0 for otherwise
 */

int prime_check(int n, int x)
{
	if (x == n)
		return (1);
	if (n % x == 0)
		return (0);
	else
		return (prime_check(n, (x + 1)));
}

/**
 * is_prime_number - checks for a prime number
 * @n: an input test variable
 * Return: 1 for prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_check(n, 2));
}

