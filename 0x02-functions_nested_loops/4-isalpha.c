#include "main.h"
/**
 * _isalpha(int c)- checks for lowercase or uppercase
 * @c: The character to check
 *
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
	if ((c < 'z' && c > 'a') || (c < 'Z' && c > 'A'))
		return (1);
		else
			return (0);
}
