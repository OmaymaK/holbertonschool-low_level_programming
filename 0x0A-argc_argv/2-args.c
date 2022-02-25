#include <stdio.h>
/**
 * main - checks the code
 * @argc: unused variable
 * @argv: An array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
