#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node
 * @idx: index
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int h;
listint_t *new;
listint_t *tail = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (h = 0; tail && h < idx; h++)
{
if (h == idx - 1)
{
new->next = tail->next;
tail->next = new;
return (new);
}
else
{
tail = tail->next;
}
}
return (NULL);
}
