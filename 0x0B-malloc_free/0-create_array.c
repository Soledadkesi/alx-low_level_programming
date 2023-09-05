#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - creates an array of chars
 * and initializes it with a specific char
 * @size: array size
 * @c: char to assign
 * Description: create array of size and assign char c
 * Return: pointer to array, if failed NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int s;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
		str[s] = c;

	return (str);
}
