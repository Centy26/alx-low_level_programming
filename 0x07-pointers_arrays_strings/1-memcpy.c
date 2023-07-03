#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	 char *p = dest;
  while (n--) {
    *p++ = *src++;
  }
  return dest;
}
