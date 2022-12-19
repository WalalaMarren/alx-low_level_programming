#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - Entry point
 * @str: input integer
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int count = 0;
	
	while (*(str + count) != '\0')
		puts(*str);
	count++;
}
