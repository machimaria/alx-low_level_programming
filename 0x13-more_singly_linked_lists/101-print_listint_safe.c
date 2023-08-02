#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);

size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number
 * @head: A pointer to the head
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *t, *h;
size_t n = 1;

if (head == NULL || head->next == NULL)
return (0);

t = head->next;
h = (head->next)->next;

while (h)
{
if (t == h)
{
t = head;

while (t != h)
{
n++;
t = t->next;
h = h->next;
}

t = t->next;
while (t != h)
{
n++;
t = t->next;
}

return (n);
}
t = t->next;
h = (h->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer to the head
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t n, index = 0;
n = looped_listint_len(head);

if (n == 0)
{
for (; head != NULL; n++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < n; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}

return (n);
}
