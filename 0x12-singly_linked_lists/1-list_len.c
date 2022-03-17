#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements.
 * @h: a pointer.
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		a = a + 1;
		h = h->next;
	}
	return (a);
}
