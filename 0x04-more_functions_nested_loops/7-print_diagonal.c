#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: input
 * Return: 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i + 1; j++)
			{
				if (j != i + 1)
					_putchar(' ');
				else
					_putchar('\\');
				if (n == 0 || n < 0)
					_putchar('\n');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
