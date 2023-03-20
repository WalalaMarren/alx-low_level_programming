#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - Entry point
 * @s1: String input
 * @s2: String input
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0;

	while (y == 0)
	{
		if ((*(s1 + x) == '\0') && (*(s2 + x) == '\0'))
			break;
		y = *(s1 + x) - *(s2 + x);
		x++;
	}
	return (y);
}
