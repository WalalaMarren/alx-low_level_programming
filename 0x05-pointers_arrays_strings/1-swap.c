#include <stdio.h>
/**
 * swap_int - entry point
 * @a: input integer
 * @b: input integer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = 89;
	d = 90;
	a = &c;
	b = &d;

	*a = d;
	*b = c;
}
