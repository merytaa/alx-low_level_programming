#include "lists.h"

/**
 * get_nodeint_at_index - return list
 * @point: first list
 * @ex: index of the node to return
 *
 * Return: pointe or NULL
 */
listint_t *get_nodeint_at_index(listint_t *point, unsigned int ex)
{
	unsigned int i = 0;
	listint_t *temp = point;

	while (temp && i < ex)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
