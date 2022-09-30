#include <stdio.h>

/**
 * main - print name of the program
 * @argc: count of arguments in the program
 * @argv: array of pointers to strings(the arguments)
 * Description: the program uses arguments to main
 * Return: 0 for success
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	/*(void)argc;*/
	printf("%s\n", argv[0]);
	return (0);
}
