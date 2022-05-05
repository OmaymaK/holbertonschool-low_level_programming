#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning
 * @head: linked list
 * @n: new value
 * Return: address or 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
