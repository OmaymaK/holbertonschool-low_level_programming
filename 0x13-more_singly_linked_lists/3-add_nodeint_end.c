#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t list
 * @head: pointer to pointer to struct
 * @n: value of n member of new node
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *address = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	if (new_node ==  NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (address->next != NULL)
			address = address->next;
		address->next = new_node;
	}
	return (new_node);
}
