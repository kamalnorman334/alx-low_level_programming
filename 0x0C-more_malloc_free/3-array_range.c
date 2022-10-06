#include "main.h"
#include <stdlib.h>

/**
 * array_range - creating an array of integers
 *
 * @min: min number of elements
 * @max: max number of elements
 *
 * Return: (array)
*/

int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
