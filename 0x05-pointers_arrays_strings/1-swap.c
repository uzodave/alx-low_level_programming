#include "main.h"

/**
 * swap_int - switches the values of two integer variables
 * @a: first variable
 * @b: second variable
 * Return: Void
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
