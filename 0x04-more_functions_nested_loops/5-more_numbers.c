#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry point
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int j;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
