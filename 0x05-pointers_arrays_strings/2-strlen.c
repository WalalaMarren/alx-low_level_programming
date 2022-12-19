#include "main.h"
/**
 * _puts - entry poin
 * @str: character input
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
