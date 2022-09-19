#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char strng[666];

	while (*(s + i))
	{
		*(strng + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(strng + j);
		j++;
		i--;
	}
}
