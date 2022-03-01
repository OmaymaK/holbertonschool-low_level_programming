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
	unsigned int i, s;

	if (str == NULL)
		return (NULL);

	s = sizeof(str);

	tab = malloc(s);

	if ( tab == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		tab[i] = *(str + i);
	return (tab);
}
