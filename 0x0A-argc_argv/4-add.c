#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks the code
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 and 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
