#include "main.h"
#include <stdio.h>

void print_alphabet(void);

int main()
{
	print_alphabet();
	return (0);
}

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')

	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
