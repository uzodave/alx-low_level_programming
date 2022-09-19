#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: input characters in a string
 * Return - void
 */
void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	str -= (length / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
