#include "lists.h"

/**
 * add_nodeint_end - add a list
 * @head: pointe in list
 * @n: data of element
 *
 * Return: pointe or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *temp = *head;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = w;

	return (w);
}
