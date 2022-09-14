#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int last digit if from
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r;
	
	if (r < 0)
		r = -r;

	if (n > 0)
		n = -n;
	_putchar(r + '0');

	return (r);
}
