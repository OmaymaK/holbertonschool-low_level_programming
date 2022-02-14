#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char test = 0;

	while (*s)
	{
		if (*s == '-')
			sign = sign * -1;
		if (*s >= '0' && *s <= '9')
		{
			test = 1;
			total = total * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (test)
				break;
		}
		s++;
	}
	if (sign < 0)
		total = (-(total));
	return (total);
}
