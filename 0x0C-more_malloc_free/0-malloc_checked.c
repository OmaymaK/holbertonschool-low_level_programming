#include "main.h"
/*
 * malloc_checked - allocates memory 
 * @b: The number of bytes to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
