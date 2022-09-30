#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * digit_test - checks for integers in an array
 * of character
 * @s: string pointer
 * Return 0 for true
 */
int digit_test(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

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

	/**
	 * if (argc == 1)
	 * printf("%d\n", result);
	 * if (argc > 1)
	 * {}
	 */
		for (i = 1; i < argc; i++)
		{
			if (digit_test(argv[i]))
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
		return (0);
}
