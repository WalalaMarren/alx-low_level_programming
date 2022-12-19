#include "main.h"
/**
 * _strlen - entry point
 * @s: input character
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
