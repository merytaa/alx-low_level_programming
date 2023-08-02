#include "lists.h"

/**
 * free_listint_safe - free list
 * @ah: pointe list
 *
 * Return: number of list
 */
size_t free_listint_safe(listint_t **ah)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!ah || !*ah)
		return (0);

	while (*ah)
	{
		diff = *ah - (*ah)->next;
		if (diff > 0)
		{
			temp = (*ah)->next;
			free(*ah);
			*ah = temp;
			len++;
		}
		else
		{
			free(*ah);
			*ah = NULL;
			len++;
			break;
		}
	}

	*ah = NULL;

	return (len);
}
