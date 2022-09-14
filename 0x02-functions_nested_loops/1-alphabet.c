#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		_putcharf(chr);
		chr++;

	}
	_putchar('\n');
return (0);
}
