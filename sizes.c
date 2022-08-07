#include <stdio.h>

/**
 * main - returns tge sizes of different data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	printf("size of a 'char' data type on my computer is: %lu bytes\n", sizeof(char));
	printf("size of a 'int' data type on my computer is: %lu bytes\n", sizeof(int));
	printf("size of a 'float' data type on my computer is: %lu bytes\n", sizeof(float));
	printf("size of a 'double' data type on my computer is: %lu bytes\n", sizeof(double));
	printf("size of the 'n' variable on my computer is: %lu bytes\n", sizeof(n));

	return (0);
}
