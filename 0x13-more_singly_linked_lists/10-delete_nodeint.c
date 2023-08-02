#include "lists.h"

/**
 * delete_nodeint_at_index - delete in index
 * @ad: pointe in list
 * @ex: index where delete
 * Return: Success or Fail
 */
int delete_nodeint_at_index(listint_t **ad, unsigned int ex)
{
	listint_t *temp = *ad;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*ad == NULL)
		return (-1);

	if (ex == 0)
	{
		*ad = (*ad)->next;
		free(temp);
		return (1);
	}

	while (i < ex - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
