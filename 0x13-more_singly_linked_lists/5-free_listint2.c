#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)

{
listint_t *tail;

if (head == NULL)
return;

while (*head)
{
tail = (*head)->next;
free(*head);
*head = tail;
}

*head = NULL;

}
