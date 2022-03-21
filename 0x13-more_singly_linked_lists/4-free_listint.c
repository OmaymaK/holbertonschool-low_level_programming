#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: points to the structure
 */
void free_listint(listint_t *head)
{
	listint_t *address;

	while (head->next != NULL)
	{
		address = head->next;
		free(head);
		head = address;
	}
}
