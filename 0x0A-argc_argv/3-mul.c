#include <stdlib.h>
#include <stdio.h>

/**
* main - multiplication of 2 numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
