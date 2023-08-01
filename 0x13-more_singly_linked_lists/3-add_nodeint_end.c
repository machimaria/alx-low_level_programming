#include "lists.h"
/**
 * add_nodeint_end - adds a node
 * @head: pointer
 * @n: integer
 * Return: pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *tail = *head;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (tail->next)
		tail = tail->next;

	tail->next = add;

	return (add);
}
