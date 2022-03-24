#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer
 * index: index of bit to be changed to 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int res;

	if (index > 64)
		return (-1);
	res = ((1 << index) | 1);
	*n = res;
	return (1);
}
