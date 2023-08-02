#include "lists.h"

/**
 * reverse_listint - linked list
 * @ad: pointe in list
 *
 * Return: new list
 */
listint_t *reverse_listint(listint_t **ad)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*ad)
	{
		next = (*ad)->next;
		(*ad)->next = prev;
		prev = *ad;
		*ad = next;
	}

	*ad = prev;

	return (*ad);
}
