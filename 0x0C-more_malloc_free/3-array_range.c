#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *x, h = 0;

	if (min > max)
		return (0);

	x = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[h] = min;
		h++;
		min++;
	}

	return (x);
}
