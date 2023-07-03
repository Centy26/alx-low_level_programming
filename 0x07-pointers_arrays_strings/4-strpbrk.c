#include "main.h"

/**
 * *_strpbrk -  searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++) {
    for (char *p = accept; *p != '\0'; p++) {
      if (*s == *p) {
        return s;
      }
    }
  }
  return NULL;
}
