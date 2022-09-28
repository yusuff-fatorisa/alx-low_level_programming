#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to the input string parameter
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 *
 * @s: pointer to string
 * @l: position
 *
 * Return: a boolean value
 */

int p1(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (p1(s + 1, l - 2));
	return (0);
}

/**
 * is_palindrome - palindrome
 *
 * @s: the pointer to the string
 *
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
