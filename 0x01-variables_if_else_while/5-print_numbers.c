#include <stdio.h>

/**
 * main - print all single digit numbers base 10, starting 0, followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
