#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a new string, duplicate of the string
* @str: char
* Return: 0
*/

char *_strdup(char *str)
{
	char *xxx;
	int d, r = 0;

	if (str == NULL)
		return (NULL);

	d = 0;

	while (str[d] != '\0')
		d++;

	xxx = malloc(sizeof(char) * (d +1));

	if (xxx == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)

		xxx[r] = str[r];

	return (xxx);
}
