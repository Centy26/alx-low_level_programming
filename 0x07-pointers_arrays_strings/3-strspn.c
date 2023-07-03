#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @ accept: input
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
  while (s[i] != '\0' && strchr(accept, s[i]) != NULL) {
    i++;
  }
  return i;
}
