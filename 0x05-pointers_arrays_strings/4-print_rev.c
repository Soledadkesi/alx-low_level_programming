#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: print string
 * Return:0
 */

void print_rev(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (a--; a >= 0; a--)

	_putchar(s[a]);
	_putchar('\n');
}
