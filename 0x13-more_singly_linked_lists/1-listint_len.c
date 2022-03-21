#include "lists.h"
#include <stdio.h>
/**
 * listint_len - a function that returns the number of elements in a linked list
 * @h: pointer
 * Return: number of elements in a linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
