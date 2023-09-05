#include <stdlib.h>
#include "main.h"

/**
* count_word - helper function to count the number of words
* in a string
* @s: string to evaluate
*
* Return: number of words
*/

int count_word(char *s)
{
	int flag, w, x;

	flag = 0;
	x = 0;

	for (w = 0; s[w] != '\0'; w++)
	{
		if (s[w] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			x++;
		}
	}

	return (x);
}

/**
* **strtow - split a string into words
* @str: string to split
*
* Return: pointer to an array of strings (Success)
* or NULL (Error)
*/

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, w = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (w)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (w + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - w;
				k++;
				w = 0;
			}
		}
		else if (w++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
