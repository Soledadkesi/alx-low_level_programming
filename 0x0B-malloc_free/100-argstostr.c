#include "main.h"
#include <stdlib.h>

/**
* argstostr - main entry
* @ac: int input
* @av: double pointer array
* Return: 0
*/

char *argstostr(int ac, char **av)
{
	int d, x, y = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (d = 0; d < ac; d++)
	{
		for (x = 0; av[d][x]; x++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (d = 0; d < ac; d++)
	{
	for (x = 0; av[d][x]; x++)
	{
		str[y] = av[d][x];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}
	return (str);
}
