#include "main.h"

/**
 * print_alphabet - prints the letters of the english alphabet in lowercase
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
