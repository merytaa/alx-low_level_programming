#include "lists.h"

/**
 * listint_len - return  linked lists
 * @m: variable
 *
 * Return: numbe
 */
size_t listint_len(const listint_t *m)
{
	size_t num = 0;

	while (m)
	{
		num++;
		m = m->next;
	}

	return (num);
}
