#include "main.h"
#include <stdlib.h>
/**
 * stringlength - calculates the length of a string
 * @s: string
 * Return: length of the string
 */
unsigned int stringlength(char *s)
{
	unsigned int l = 0;

	if (s != NULL)
	{
		while (s[l] != '\0')
			l++;
	}
	return (l);
}
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, i, j;
	char *tab;

	l2 = stringlength(s2);

	l1 = stringlength(s1);

	tab = malloc(l1 + l2 + 1);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		tab[i] = s1[i];

	for (j = l1; j < (l1 + l2); j++)
		tab[j] = s2[j - l1];

	return (tab);
}
