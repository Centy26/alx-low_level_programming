#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: The character to be checked.
 * Return: 1 if the character is a lowercase letter, o otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
