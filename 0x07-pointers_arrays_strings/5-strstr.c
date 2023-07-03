#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{ 
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return ('\0');
}
