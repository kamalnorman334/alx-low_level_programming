#include "main.h"
/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int temp, i, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[e] = temp;
		i++;
		j--;
	}
}
