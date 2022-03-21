#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *address;
	int val;

	if (*head == NULL)
		return (0);
	address = (*head)->next;
	val = (*head)->n;
	free(*head);
	*head = address;
	return (val);
}
