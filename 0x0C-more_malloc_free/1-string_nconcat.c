#include "main.h"
#include <stddef.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes that will be allocated
 * Return: a poiter
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, l = 0, k;
	char *s;

	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j])
			j++;
	}
	if (j > n)
		l = i + n;
	else
		l = i + j;
	s = malloc(sizeof(char) * l + 1);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	j = 0;
	while (k < l)
	{
		s[k] = s2[j];
		k++;
		j++;
	}
	s[k + 1] = '\0';
	return (s);
}
