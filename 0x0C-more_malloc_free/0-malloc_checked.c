#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size to allocate
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *jk;

	malloc(sizeof(int) * b);
		jk = malloc(b);

	if (jk == NULL)
	{
		exit(98);
	}

	return (jk);
}
