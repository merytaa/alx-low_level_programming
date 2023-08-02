#include "lists.h"

/**
 * free_listint - frees list
 * @poin: listint  freed
 */
void free_listint(listint_t *poin)
{
	listint_t *temp;

	while (poin)
	{
		temp = head->next;
		free(poin);
		poin = temp;
	}
}
