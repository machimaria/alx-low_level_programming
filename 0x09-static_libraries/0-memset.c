#include "main.h"
/**
 * _memset - fills a block of memory
 * @s: input
 * @b: output
 * @n: byte number
 * Return: new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
