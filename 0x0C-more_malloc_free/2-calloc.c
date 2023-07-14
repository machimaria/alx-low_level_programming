#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @size: size
 * @nmemb: elements
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int f = 0, g = 0;
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);

	g = nmemb * size;
	r = malloc(g);

	if (r == NULL)
		return (NULL);

	while (f < g)
	{
		r[f] = 0;
		f++;
	}

	return (r);
}
