#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - print the elements in a list.
 * a blank line
 * @h: the list
 * @list_t: the constant
 * Description: print the elements of one list
 * section header: the header of this function is lists.h
 * Return: this return the num of the elements in the list
 */
size_t print_list(const list_t *h)
{
	int d;

	for (d = 0; h ; d++)
	{
		if (h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (d);
}
