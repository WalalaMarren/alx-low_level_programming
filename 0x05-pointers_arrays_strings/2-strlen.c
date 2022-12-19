#include "main.h"
/**
 * _puts - entry poin
 * @str: character input
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count += 1;
	}
	return (count);
}
