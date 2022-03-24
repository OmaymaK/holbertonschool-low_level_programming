#include "main.h"
#include <stdio.h>
/** 
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: poiter to the binary number of type string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int count = 1;
	int i;
	int len = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		else
		{
			if (b[i] == '1')
				num = num + count;
			count = count * 2;
	
		}
	}
	return (num);
}
