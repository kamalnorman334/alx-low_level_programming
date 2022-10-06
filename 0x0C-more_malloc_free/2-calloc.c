#include "main.h"

/**
 *_calloc - a function that allocates memory
 * for an array, using malloc.
 *
 *@nmemb: element in the array
 *@size: bytes for each position in array
 *
 *Return: pointer void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;

if (size == 0 || nmemb == 0)
	return (NULL);

m = malloc(nmemb * size);

if (m == 0)
	return (NULL);

_memset(m, 0, nmemb * size);

return (m);
}
