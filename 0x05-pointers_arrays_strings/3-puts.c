#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * @str: input integer
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str++);
	}
	printf("\n");
}
