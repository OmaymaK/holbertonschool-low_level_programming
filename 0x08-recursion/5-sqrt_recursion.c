#include "main.h"
int _checking_root(int n, int i);
/**
 * _checking_root - checks the square root of n
 * _sqrt_recursion - returns the natural square root of a number
 * @n number that we will get the square root of
 * @i square root of n
 * Return: square root , -1 if error
 */
int _sqrt_recursion(int n)
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
