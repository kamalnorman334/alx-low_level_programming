#include "holberton.h"

/**
 * print_line - drawing a straight line in the terminal
 * @n: variable
 *
 * Return: 0
 */
void print_line(int n)
{


int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar (95);
}

_putchar ('\n');
}

else
{
_putchar ('\n');
}

}
