#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return: Always success (0)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
