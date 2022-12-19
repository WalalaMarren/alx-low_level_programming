#include "main.h"
#include <stdio.h>
/**
 * puts2 - Entry point
 * @str: pointer to a character variable
 * Return: Always 0
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
