#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/*
 * Main - chech the code
 * Return 0
 */

int main (void)
{
	int i;
	int j;

	i = ABS(-28) * 10;
	j = ABS(28) *10;
	printf("%d, %d\n", i, j);

	return (0);
}
