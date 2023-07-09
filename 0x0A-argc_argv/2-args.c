#include <stdio.h>

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: void
 */
int main(int argc, char *argv[])
{
	(void)argv;
	int i;
	for (i + 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}	
