#include "lists.h"

/**
 * add_nodeint - add new list
 * @head: pointe in list
 * @n:  inset node
 *
 * Return: pointe or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = *head;
	*head = w;

	return (w);
}
