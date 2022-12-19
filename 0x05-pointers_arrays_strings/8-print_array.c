#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: Pointer to an int variable
 * @n: input integer
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i< n; i++)
	{
		printf("%d", *a);
		if (i < n-1)
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
}
