#include "main.h"
/**
 * _strchr -  locates a character in a string
 *
 * @s: pointer to a string
 * @c: the char we want to find in s
 * Return: the first occurrence of c in s or null if not found
 *
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
