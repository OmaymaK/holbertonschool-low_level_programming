#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings 
 * @n: number of strings to be printed
 * @separator: string to be printed between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char *) == NULL)
			printf("nil");
		printf("%s", va_arg(args, char *));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

