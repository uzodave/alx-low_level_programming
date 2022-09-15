#include <stdio.h>
//#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * onto the terminal
 * @n: the determinant for how long this line will be
 * Return: Always jackshit
 */
void print_diagonal(int n);
int main()
{
	print_diagonal(2);
	return 0;
}


void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			putchar('#');			
		}
		putchar('\n');
	}
}
