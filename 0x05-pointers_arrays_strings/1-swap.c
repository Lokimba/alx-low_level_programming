#include "main.h"
#include <stdio.h>

/**
 * main - Write a function that swaps the values of two integers
 * Return - Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
