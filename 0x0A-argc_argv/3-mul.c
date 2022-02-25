#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - checks the code.
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: the result of the multiplication otherwisen if error 1.
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
			printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
			return (0);
	}
}
