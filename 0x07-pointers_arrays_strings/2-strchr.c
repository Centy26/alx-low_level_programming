#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: input
 * c: input
 *Return: NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++) {
    if (*s == c) {
      return s;
    }
  }
  return NULL;
}
