#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  function returns a pointer to a new string.
 * @str: string
 * Return: returns a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *tab;
	unsigned int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	tab = malloc(l + 1);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		tab[i] = *(str + i);
	return (tab);
}
