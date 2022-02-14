#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, a = 0;
	char t;

	while (s[a++])
		len++;

	for (a = len - 1; a >= len / 2; a--)
	{
		t = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = t;
	}
}
