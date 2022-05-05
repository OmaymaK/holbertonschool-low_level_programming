#include "lists.h"
#include <stddef.h>
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: node's index
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = head;
	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
