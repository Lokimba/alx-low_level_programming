#include <stdio.h>

/**
 * main - print size of variuos types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a float: %d bytes\n", sizeof(float));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long int));
	printf("Size of a long long int: %d bytes\n", sizeof(long long int));
	return (0);
}
