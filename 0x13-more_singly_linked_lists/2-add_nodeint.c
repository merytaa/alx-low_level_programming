#include "lists.h"

/**
 * add_nodeint - ad a new  list
 * @poin: pointe in list
 * @m: new node
 *
 * Return: pointer or NULL
 */
listint_t *add_nodeint(listint_t **poin, const int m)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->m = m;
	new->next = *poin;
	*poin = new;

	return (new);
}
