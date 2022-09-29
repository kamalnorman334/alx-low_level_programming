#include "main.h"

/**
 * power_operation - a function that returns
 * the natural square root of a number
 * @n: input
 * @c: iterator.
 * Return: square root
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: input 
 *
 * Return: natural square root
 *
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
