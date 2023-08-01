#include "lists.h"
/**
 * print_listint - prints all the elements of the list
 * @h: the head pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t print;

	if (h == NULL)
		return (0);
	for (print = 0; h != NULL; print++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (print);
}
