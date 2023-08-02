#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to the first element
 * @index: index of the node
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tail = *head;
listint_t *s = NULL;
unsigned int y = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(tail);
return (1);
}

while (y < index - 1)
{
if (!tail || !(tail->next))
return (-1);

tail = tail->next;
y++;
}

s = tail->next;
tail->next = s->next;
free(s);

return (1);
}
