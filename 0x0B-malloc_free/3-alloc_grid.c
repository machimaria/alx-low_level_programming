#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: wideness
 * @height: height
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int w, x, y, z;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
		free(s);
		return (NULL);

	for (w = 0; w < height; w++)
	{
		s[w] = malloc(sizeof(int) * width);

		if (s[w] == NULL)
		{
			for (x = w; x >= 0; x++)
			{
				free(s[x]);
			}

			free(s);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			s[y][z] = 0;
			
			return (s);
}
