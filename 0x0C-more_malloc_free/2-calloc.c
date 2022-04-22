#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: number of bites of the element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *cont;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	cont = s;
	for (i = 0; i < nmemb * size; i++)
		cont[i] = '\0';
	return (s);
}
