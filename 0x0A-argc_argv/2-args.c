#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])

{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
