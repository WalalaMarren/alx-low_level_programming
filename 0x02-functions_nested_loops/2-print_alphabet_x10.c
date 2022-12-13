#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Function to print alphabet
 *
 * Return: Always success (0)
 */
void print_alphabet_x10(void)
{
	int j = 1;

	while (j <= 10)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
