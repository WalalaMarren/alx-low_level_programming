#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry point
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int j = 1;

	while (j <= 10)
	{
		int i;
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		j++;
	}
}
