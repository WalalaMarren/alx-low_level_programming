#include "lists.h"

/**
 * print_list - entry point
 * @h: pointer to a struct node
 *
 * Return: Always 0
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
