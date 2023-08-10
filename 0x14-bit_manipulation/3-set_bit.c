#include "main.h"
/**
 * set_bit - sets the value of a bit
 * at a given index
 * @index: the index
 * @n: pointer
 * Return: output
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	h = 1;
	h = h << index;
	*n = ((*n) | h);
	return (1);
}
