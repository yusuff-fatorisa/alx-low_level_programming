#iclude "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 *
 * @s: pointer to the string params
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
