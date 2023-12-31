#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: source input
 * @dest: destination
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int g;
	int h;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[g] = src[h];
		g++;
		h++;
	}
	dest[g] = '\0';
	return (dest);
}
