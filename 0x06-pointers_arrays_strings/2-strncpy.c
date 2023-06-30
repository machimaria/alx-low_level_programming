#include "main.h"
#include <stdio.h>
/**
 * _strncpy -  copies a string
 * @n: integer
 * @src: source value
 * @dest: destination value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
