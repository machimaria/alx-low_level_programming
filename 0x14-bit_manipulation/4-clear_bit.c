#include "main.h"
/**
 * clear_bit - sets the value of a bit
 * @index: the index
 * @n: the pointer
 * Return: output
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h;

	h = 1;
	h = h << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = h ^ *n;

	return (1);
}
