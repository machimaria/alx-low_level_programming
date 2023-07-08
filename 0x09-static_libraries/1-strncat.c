#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: source input
 * @dest: destination
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int g;
	int h;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	h = 0;
	while (h < n && src[h] != '\0')
	{
		dest[g] = src[h];
		g++;
		h++;
	}
	dest[g] = '\0';
	return (dest);
}
