#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @src: memory area
 * @dest: memory area destination
 * @n: integer
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
