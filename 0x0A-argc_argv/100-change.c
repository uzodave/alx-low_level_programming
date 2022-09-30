#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: count of arguments in the program
 * @argv: array of pointers to strings(the arguments)
 * Description: this program uses arguments to main
 * (command line arguments)
 * Return: 0 for success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	/**
	 * int i;
	 * int cents;
	 */

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
