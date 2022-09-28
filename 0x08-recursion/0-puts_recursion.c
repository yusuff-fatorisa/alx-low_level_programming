#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: the pointer to the char
 *
 * Return: No.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}