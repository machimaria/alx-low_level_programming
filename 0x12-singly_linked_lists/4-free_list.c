#include "lists.h"
/**
 * free_list - free a list
 * a blank line
 * @head: the head of list
 * Description: this function free a list.
 * section header: the header of this function is lists.h
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *position, *next;

	position = head;

	while (position != NULL)
	{
		next = position->next;
		free(position->str);
		free(position);
		position = next;
	}
	head = NULL;
}
