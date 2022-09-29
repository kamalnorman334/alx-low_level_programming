#include "main.h"

/**
 * power_operation - a function that returns
 * the natural square root of a number
 * @n: input
 * @c: iterator.
 * Return: square root
 */

int _sqrt_recursion_wrapper(int n)
{
	int min;
	int max;
	int i, guess_squared;

	i = (min + max) / 2;
	i_sqr = i * i;

	if (i_sqr == n)
		return (i);
	else if (min == max)
		return (-1);
	else if (i_sqr < n)
		return (_sqrt_recursion_wrapper(n, i + 1, max));
	else
		return (_sqrt_recursion_wrapper(n, min, i - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: neutral square root
*/
int _sqrt_recursion(int n)
{
	if (n == 1)		
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_wrapper(n, 1, n));
}
