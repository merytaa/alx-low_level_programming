#include "lists.h"

/**
 * insert_nodeint_at_index - inserts list
 * @ad: pointe list
 * @x: index added
 * @m: node
 * Return: pointe or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **ad, unsigned int x, int m)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *ad;

	new = malloc(sizeof(listint_t));
	if (!new || !ad)
		return (NULL);

	new->m = m;
	new->next = NULL;

	if (x == 0)
	{
		new->next = *ad;
		*ad = new;
		return (new);
	}

	for (i = 0; temp && i < x; i++)
	{
		if (i == x - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
