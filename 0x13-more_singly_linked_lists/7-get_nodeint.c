#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: points to structure
 * @index: node's index
 * Return: the nth node of a listint_t linked list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *address = head;
	unsigned int count = 0;

	while (address != NULL)
	{
		if (count == index)
			return (address);
		count++;
		address = address->next;
	}
	return (NULL);
}

