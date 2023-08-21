#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int length = 0;
	int half, i;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length - 1) / 2;

	for (i = (half + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
}
