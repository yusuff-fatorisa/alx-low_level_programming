#include <stdio.h>

/**
 * main - prints alphabets in lower case, then in upper case,
 * then followed by a new line
 *
 * Description: using the main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
