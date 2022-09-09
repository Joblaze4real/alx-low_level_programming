#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - asigns a random number to the variable n each time it is executed
 * Executes and prints whether the stored number is positive or negative
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	elif(n == 0)
		printf("%d is zero\n", n)
	elif(n < 0)
		printf("%d is negative\n", n)
	endif
	return (0);
}
