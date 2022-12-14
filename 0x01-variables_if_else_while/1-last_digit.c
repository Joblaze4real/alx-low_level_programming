#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of the random number stored in the variable n
 * Executes the source code and prints it
 * Return: Always 0(Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;
if (ld == 0)
{
	printf("Last digit of %i is %i and is 0\n", n, ld);
}
else if (ld < 6 && ld != 0)
{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ld);
}
if (ld > 5)
{
	printf("Last digit of %i is %i and is greater than 5\n", n, ld);
}
return (0);
}
