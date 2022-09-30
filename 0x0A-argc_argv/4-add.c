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
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc == 1)
		printf("%d\n", result);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				result += atoi(argv[i]);
				if (i == argc - 1)
					printf("%d\n", result);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
		return (0);
}
