#include "main.h"
#include <stdio.h>

/* *
 * C program that checks for uppercase character
 * @c: The character to check with 
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{ 
	       	return (1);
	}
	else
		return (0);
}
