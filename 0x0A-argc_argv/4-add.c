#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int s, x, add = 0;

	for (s = 1; s < argc; s++)
	{
		for (x = 0; argv[s][x] != '\0'; x++)
		{
			if (!isdigit(argv[s][x]))
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[s]);
	}
	printf("%d\n", add);
	return (0);
}
