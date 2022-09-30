#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * @argc: size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: Alway 0 when successfull.
 */

int main(int argc, __attribute__((unused)), char *agrv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
