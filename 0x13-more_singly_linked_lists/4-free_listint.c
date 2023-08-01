#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tail;

	while (head)
	{
		tail = head->next;
		free(head);
		head = tail;
	}
}
