#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @ accept: input
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

    while (*s != '\0') {
        char *a = accept;
        while (*a != '\0') {
            if (*s == *a) {
                length++;
                break;
            }
            a++;
        }
        if (*a == '\0') {
            break;
        }
        s++;
    }

    return length;
}
