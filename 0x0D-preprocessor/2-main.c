#include <stdio.h>

/*
 * main - entry
 *
 * Description: Prints file from where it was compiled from
 *
 * return 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
