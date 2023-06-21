#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: int to be checked
 * Return: 0.
 */

int print_last_digit(int n)
{       
	int r;

	if (n < 0)
		n = -n;

	r = n % 10;
	if (r < 0)
		r = -r;

	_putchar(r = r + '0');
	return (r);
}
