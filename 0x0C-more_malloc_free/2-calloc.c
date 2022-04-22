#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: number of bites of the element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	return (s);
}
