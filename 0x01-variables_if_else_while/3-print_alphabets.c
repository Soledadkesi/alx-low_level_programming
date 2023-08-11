#include <stdio.h>
/**
 * main - Entry point
 * Description: 'a program that prints the alphabet'.
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int u = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
