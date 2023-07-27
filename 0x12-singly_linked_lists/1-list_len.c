#include "lists.h"
/**
 * list_len - return the number of elements
 * a blank line
 * @h: the list
 * Description: print the elements of one list
 * section header: the header of this function is lists.h
 * Return: this return the num of the elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t g;

	for (g = 0; h; g++)
	{
		h = h->next;
	}
	return (g);
}
