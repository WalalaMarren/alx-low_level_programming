#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - Entry point
 * @s: Input character
 * Return: Always 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
