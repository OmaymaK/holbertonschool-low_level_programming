#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
