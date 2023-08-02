#include "lists.h"

/**
 * free_listint - frees list
 * @poin: listint  freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
