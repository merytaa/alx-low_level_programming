#include "lists.h"

/**
 * free_listint2 - frees list
 * @poin: pointe freed
 */
void free_listint2(listint_t **poin)
{
	listint_t *temp;

	if (poin == NULL)
		return;

	while (*poin)
	{
		temp = (*poin)->next;
		free(*poin);
		*poin = temp;
	}

	*poin = NULL;
}
