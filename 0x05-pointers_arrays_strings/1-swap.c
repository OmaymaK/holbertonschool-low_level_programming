#include "main.h"
/** 
 * _swap_int- swaps the values of two integers
 * @a: the first integer to swap
 * @b: second integer to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
