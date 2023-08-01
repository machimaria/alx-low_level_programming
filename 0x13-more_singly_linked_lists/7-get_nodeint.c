#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head: first node in the linked list
 * @index: index of the node
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int y = 0;
listint_t *tail = head;

while (tail && y < index)
{
tail = tail->next;
y++;
}

return (tail ? tail : NULL);
}
