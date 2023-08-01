#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements
 * @h: the head pointer
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	if (h == NULL)
		return (0);
	for (numb = 0; h != NULL; numb++)
	{
		h = h->next;
	}
	return (numb);
}
