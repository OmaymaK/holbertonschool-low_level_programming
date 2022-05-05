#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end
 * @head: linked list
 * @n: value
 * Return: the address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *pre;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	pre = *head;
	while (pre->next)
		pre = pre->next;
	node->prev = pre;
	pre->next = node;

	return (node);
}

