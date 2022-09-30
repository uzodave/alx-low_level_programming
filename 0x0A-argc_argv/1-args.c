#include <stdio.h>

/**
 * main - prints the numbr of arguments passed into
 * the function
 * @argc: count of arguments in the program
 * @argv: array of pointers to strings(the arguments)
 * Description: this program uses arguments to main
 * (command line arguments)
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
