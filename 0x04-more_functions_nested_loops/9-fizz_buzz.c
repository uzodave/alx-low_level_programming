#include <stdio.h>

/**
 * main - runs from 1 through 100
 * Description: Simple program to test multiples of
 * 3, 5 and both
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", i);

		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
