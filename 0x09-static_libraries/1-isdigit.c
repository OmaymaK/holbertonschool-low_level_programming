#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for digit
 * @c: The character to print
 *
 * Return: 1 if upper case found else 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);

	}
	else
		return (0);
}
