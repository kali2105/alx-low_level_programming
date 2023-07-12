#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - A function that return a pointer to two dimensional array
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: NULL (failure or null width or height)
 * pointer (Success)
 */
int **alloc_grid(int width, int height)
{
	int **pp, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pp = (int **)malloc(height * sizeof(int *));
	if (pp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pp[i] = (int *)malloc(width * sizeof(int));
		if (pp[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(pp[j]);
			}
			free(pp);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pp[i][j] = 0;
		}
	}
	return (pp);
}
