#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of argument
 * @argv: array of numbers
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
(void) argv;/*Ignore argv*/
printf("%i\n", argc - 1);
return (0);
}
