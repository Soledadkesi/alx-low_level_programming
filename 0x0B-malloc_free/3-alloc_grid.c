#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **you;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	you = malloc(sizeof(int *) * height);

	if (you == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		you[x] = malloc(sizeof(int) * width);

		if (you[x] == NULL)
		{
			for (; x >= 0; x--)
				free(you[x]);

					free(you);

					return (NULL);
		}

	}

	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	you[x][y] = 0;
	}

	return (you);
}
