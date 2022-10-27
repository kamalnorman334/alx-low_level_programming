#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
