#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **tab, i, j, k, h;

	if (width == 0 || height == 0)
		return (NULL);
	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			for (k = 0; k <= i; i++)
				free(tab[i]);
			free(tab);
		return (NULL);
		}
	}
	j = 0;
	while (j < height)
	{
		h = 0;
		while (h < width)
		{
			tab[j][h] = 0;
			h++;
		}
		j++;
	}
	return (tab);
}

