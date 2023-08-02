#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *ad);
size_t print_listint_safe(const listint_t *ad);

/**
 * looped_listint_len - count nodes in list
 * @ad: pointe to check.
 *
 * Return: null.
 * Otherwise - number of list.
 */
size_t looped_listint_len(const listint_t *ad)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (ad == NULL || ad->next == NULL)
		return (0);

	tortoise = ad->next;
	hare = (ad->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - print list
 * @ad: pointe of list.
 * Return: number of list.
 */
size_t print_listint_safe(const listint_t *ad)
{
	size_t nodes, ex = 0;

	nodes = looped_listint_len(ad);

	if (nodes == 0)
	{
		for (; ad != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)ad, ad->n);
			ad = ad->next;
		}
	}

	else
	{
		for (ex = 0; ex < nodes; ex++)
		{
			printf("[%p] %d\n", (void *)ad, ad->n);
			ad = ad->next;
		}

		printf("-> [%p] %d\n", (void *)ad, ad->n);
	}

	return (nodes);
}
