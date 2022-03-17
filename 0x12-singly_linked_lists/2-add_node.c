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
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *@head: the head of the linked list.
 *@str: a pointer.
 *Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *ch;
	int size;
	list_t *T;

	T = malloc(sizeof(list_t));
	if (T == NULL)
		return (NULL);
	if (str != NULL)
	{
		ch = strdup(str);
		size = _strlen(str);
	}
	T->len = size;
	T->str = ch;
	T->next = *head;
	*head = T;
	return (*head);
}

