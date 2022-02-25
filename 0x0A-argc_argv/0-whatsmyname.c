#include <stdio.h>
/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: Program name followed by new line
 */
int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
