#include "lists.h"

/**
 * add_nodeint_end - adds list
 * @poin: pointe in  list
 * @m: data to insert in the new element
 *
 * Return: pointe or NULL
 */
listint_t *add_nodeint_end(listint_t **poin, const int m)
{
	listint_t *new;
	listint_t *temp = *poin;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->m = m;
	new->next = NULL;

	if (*poin == NULL)
	{
		*poin = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
