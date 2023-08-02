#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int add = 0;
listint_t *tail = head;

while (tail)
{
add += tail->n;
tail = tail->next;
}

return (sum);
}
