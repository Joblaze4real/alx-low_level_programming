#include <stdio.h>
/**
 * main - prints different size of various types on the computer
 * in the put function
 * Description: using the main function, this program prints "different types
 * of size on the computer it is compiled and run on
 * Return: 0
 */
/*
 * First code Tested but to no avail
 *
 * int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;	
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
