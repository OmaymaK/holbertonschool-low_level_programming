#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - gives the length of a string
 * @s: string
 * Return: the lengthof a string.
 */

int _strlen(const char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		continue;
	return (l);
}

/**
 * add_node_end- adds a new node at the end of a list_t list.
 *@head: the head of the linked list.
 *@str: a pointer.
 *Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *T;
	list_t *tmp;

	if (str == NULL)
		return (NULL);
	T = malloc(sizeof(list_t));
	if (T == NULL)
		return (NULL);
	T->str = strdup(str);
	if (T->str == NULL)
	{
		free(T);
		return (NULL);
	}
	T->len = _strlen(T->str);
	T->next = NULL;
	if (*head == NULL)
	{
		*head = T;
		return (T);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = T;
	return (T);
}
