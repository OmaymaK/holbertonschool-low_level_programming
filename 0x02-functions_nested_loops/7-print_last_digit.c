#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number %10
 * @n: The number to find the last digit of
 *
 * Return: n
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = (-1 * (n % 10));
		_putchar (i + '0');
		return (i);
	}

	else
	{
		i = (n % 10);
		_putchar (i + '0');
		return (i);
	}

}
