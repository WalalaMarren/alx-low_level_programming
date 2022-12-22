#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array - Entry point
 * @a: input element
 * @n: input integer
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int j, k, l;
	
	k = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		l = a[j];
		a[j] = a[k];
		a[k--] = l;
	}
}
