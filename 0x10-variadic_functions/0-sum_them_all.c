#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all the parameters
 * @n: the starting first parameter
 * Return: sum of the parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	va_end(args);
	return (sum);
}
