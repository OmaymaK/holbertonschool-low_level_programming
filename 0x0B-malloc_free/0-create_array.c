#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);

	tab = malloc(size * sizeof(c));

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tab[i] = c;

	return (tab);
}
