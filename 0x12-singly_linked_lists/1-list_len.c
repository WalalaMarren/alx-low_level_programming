#include "lists.h"
#include <stddef.h>

/**
 * list_len - entry point
 * @h: pointer to a struct node
 *
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
