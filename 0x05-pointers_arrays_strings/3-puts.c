#include"main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: prints stringa \n
 *
 * Return: 0
 */

void _puts(char *str)
{
char *c;
int i;

c = str;

for (i = 0; c[i]; i++)
{
_putchar (c[i]);
}
_putchar('\n');
}
