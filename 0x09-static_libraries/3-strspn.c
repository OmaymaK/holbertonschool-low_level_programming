#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: character array to check
 * @accept: character array to check for
 * Return: the number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
