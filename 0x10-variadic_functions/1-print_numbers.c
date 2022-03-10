#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers
 * @n: number of integers to be printed
 * @separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		printf("%d%s", va_arg(num, int), separator);
		else
			printf("%d", va_arg(num, int));
	}
	printf("\n");
	va_end(num);
}

