#include "main.h"
/**
 * _strlen - entry point
 * @s: input character
 *
 * Return: Always 0
 */
int _strlen(char *s);
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
	}
	return (count);
}
