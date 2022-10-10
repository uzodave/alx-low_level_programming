#include <stdio.h>

/**
 * main - prints the name of the file from which
 * it was compiled
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
