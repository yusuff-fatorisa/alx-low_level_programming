#include <stdio.h>
#include "main.h"

/**
 * main - prints out all the arguments it receives
 *
 * @argc: the number of arguments received
 * @argv: an array of all arguments received
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
