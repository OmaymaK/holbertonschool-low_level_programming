#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, i;
srand(time(0));
n = rand() - RAND_MAX / 2;
i = n % 10;
if (i > 5)
	printf("Last digit of %d is %i and is greater than 5\n", n, i);
else if (i == 0)
	printf("Last digit of %d is %i and is 0\n", n, i);
else if (i < 6 && i != 0)
	printf("Last digit of %d is %i and is less than 6 and not 0\n", n, i);
return (0);
}