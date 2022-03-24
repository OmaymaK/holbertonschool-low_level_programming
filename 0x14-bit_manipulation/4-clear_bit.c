#include "main.h"
/**
 * clear_bit - sets the value of bit to 0
 * @n: pointer.
 * @index: index of the bit that will be set to 0
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
