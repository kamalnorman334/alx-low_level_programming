#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: input 1
 * @b: input 2
 *
 * Return 0
 */

void swap_int(int *a, int *b)

{
int i;

i = *a;
*a = *b;
*b = i;
}
