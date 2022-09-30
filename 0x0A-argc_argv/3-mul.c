#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multiplication of
 * two numbers
 * @argc: count of arguments in the program
 * @argv: array of pointers to strings(the arguments)
 * Description: this program uses arguments to main
 * (command line arguments)
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 1; 
	
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
			if (i == 2)
			printf("%d\n", result);
		}
	}else
		printf("Error\n");
	return (0);
}
