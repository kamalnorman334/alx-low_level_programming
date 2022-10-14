#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by new line
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
