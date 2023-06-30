#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *s: the input
 *Return: 0.
 */
void rev_string(char *s)
{
	int len = 0;

	int i = 0;
	char temp;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		temp = s[i];
		s[i++] = s[len];
		s[len] = temp;
	}
}
