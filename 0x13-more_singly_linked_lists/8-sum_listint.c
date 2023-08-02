#include "lists.h"

/**
 * sum_listint - sum of list
 * @ad: node  list
 *
 * Return: sum
 */
int sum_listint(listint_t *ad)
{
	int sum = 0;
	listint_t *temp = ad;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
