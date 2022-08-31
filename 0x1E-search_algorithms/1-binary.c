#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: A pointer to the first element of the array
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located or -1 in failure
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = (size - 1);
	size_t m, i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		m = ((l + r) / 2);

		printf("Searching in array: ");

		for (i = l; i < r ; i++)
		{
			printf("%i, ", array[i]);
		}

		printf("%i\n", array[r]);

		if (value > array[m])
			l = (m + 1);

		else if (value < array[m])
			r = (m - 1);

		else
			return (m);
	}
	return (-1);
}
