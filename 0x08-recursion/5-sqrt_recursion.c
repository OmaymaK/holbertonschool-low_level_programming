#include "main.h"
int _checking_root(int n, int i);
/**
 * _checking_root - checks the square root of n
 * @n number that we will get the square root of
 * @i square root of n
 * Return: i and n
 */
int _sqrt_recursion(int n)
/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n number that we will get its square root
 *  Return: square root otherwise -1 if error
 */
{
	return (_checking_root(n, 1));
}
int _checking_root(int n, int i)
{
	if (n < i)
	{
		return (-1);
	}
	if (n == i * i)
	{
		return (i);
	}
	else
	{
	i += 1;
	return (_checking_root(n, i));
	}
}
