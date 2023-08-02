#include "lists.h"

/**
 * pop_listint - delete list
 * @point: pointe list
 *
 * Return: data was deleted or empty
 */
int pop_listint(listint_t **point)
{
	listint_t *temp;
	int num;

	if (!point || !*point)
		return (0);

	num = (*point)->n;
	temp = (*point)->next;
	free(*point);
	*point = temp;

	return (num);
}
