#include "main.h"
/**
 * pali_check - checks if a string is a palidrome
 * @i: iterator integer
 * @j: string length returned from second function
 * @s: string pointer
 * Return: 1 if true and 0 if false
 */
int pali_check(int i, int j, char *s)
{
	if (i >= j) /*same as j <= i */
		return (1);
	if (s[i] != s[j])
		return (0);
	return (pali_check(i + 1, j - 1, s));
}
/**
 * _strlen_recursion - finds the length of a string
 * using recursion of course
 * @s: string input
 * Return: the length of string, and 0 for false
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * is_palindrome - checks if a string is a palindrome
 * funnily, an empty string is a palindrome
 * @s: string pointer
 * Return: 1 for true, 0 for false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (pali_check(0, _strlen_recursion(s) - 1, s));
}
