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
	int val;
	int num;

	a = &val;
	b = &num;

	*a = num;
	*b = val;
}
