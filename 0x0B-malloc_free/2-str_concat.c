#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int d, ci;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	d = ci = 0;

	while (s1[d] != '\0')
		d++;

	while (s2[ci] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (d + ci + 1));

	if (conct == NULL)
		return (NULL);

	d = ci = 0;

	while (s1[d] != '\0')
	{
		conct[d] = s1[d];
		d++;
	}

	while (s2[ci] != '\0')
	{
		conct[d] = s2[ci];
		d++, ci++;
	}

	conct[d] = '\0';

	return (conct);

}
