#include "main.h"

/**
 * main - prints a to z in lower case
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

	{
		putchar(c);
	}
	putchar('\n');
}
